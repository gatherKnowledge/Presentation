#### java byte code ppt 전략
1. 컴파일과 인터프리트
2.
2. 스택 프레임 구조(자료구조)
3. JVM과의 구동
4. 실 소스
> 실제로 간단한 소스 작업을 통해 만드는 것이 의미 있을듯


1. 자바 바이트 코드 정의
 우선 바이트 코드에 대해 말씀드리기 전에, 왜 바이트코드가 생겨났는지부터 말씀드려야 겠는데요
 이는 컴파일 언어와 인터프리트 언어에 대해 말씀 드려야 겠습니다. 우선적으로, 전통적인 컴파일 언어들이 있습니다. C/C++ 과 같은 언어인데요.
 이 언어들은 컴파일 단계를 통해 기계어의 바로 전 단계인 어셈블리 언어로 변환되는 언어를
 갖고있는 언

 ..이러이러해서 바이트코드가 필요하게 되는 것 입니다.


 최근 언어들의 특징내가 알고 있는, 자바 확장자 파일이 JVM이 인식 할 수 있는 형태로 컴파일 된 형태.

2. JVM은 스택 구조를 중심으로 동작하는데, 일반적으로 알고 있는 C/D/S/H 영역이 모두 스택
구조를 취하고 있다.

3. JVM의 경우, 어셈블리를 해석하는 것이 아닌 자바만의 문법으로 구성 된 자바 바이트코드
를 기계어로 번역하는, 일종의 인터프리터로 생각 할 수 있다.


일반적인 자바는 컴파일언어도, 그렇다고 명백히 인터프리터 언어도 아니다. 이와 비슷하게
바이트 코드를 생성하는 파이썬과 루비.

Bytecode Visualizer 4.3.5 자바 바이트 코드 해석기

스택 프레임 기반 --> 스택 기반의 가상머신, x86 아키텍처나 ARM 아키텍쳐가 레지스터 기반으로 동작

기본 자료형을 제외한 모든 타입을 명시적인 메모리 주소 기반의 레퍼런스가 아니라 심볼릭 레퍼런스를 통해 참조한다.
C/C++의 경우에는 플랫폼에 따라서 int형의 크기가 가변적인데, JVM의 경우에는 명확하게 크기가 명시돼 있다. 네트워크 전송 시에 사용하는 바이트 오더인 빅 엔디안을 사용한다.

사람 자체가 이해하기가 쉽지 않은 언어이기 때문에 javap라는 역어셈블러를 제ㅗㄱㅇ한다.

invokeinterface: 인터페이스 메서드 호출
invokespecial: 생성자, private 메서드, 슈퍼 클래스의 메서드 호출
invokestatic: static 메서드 호출
invokevirtual: 인스턴스 메서드 호출



자바 바이트코드	타입	설명
B	byte	signed byte
C	char	Unicode character
D	double	double-precision floating-point value
F	float	single-precision floating-point value
I	int	integer
J	long	long integer
L<classname>;	reference	an instance of class <classname>
S	short	signed short
Z	boolean	true or false
[	reference	one array dimension


자바 클래스 파일의 큰 골격은 다음과 같다.
ClassFile {  
u4 magic;  
u2 minor_version;  
u2 major_version;  
u2 constant_pool_count;  
cp_info constant_pool[constant_pool_count-1];  
u2 access_flags;  
u2 this_class;  
u2 super_class;  
u2 interfaces_count;  
u2 interfaces[interfaces_count];  
u2 fields_count;  
field_info fields[fields_count];  
u2 methods_count;  
method_info methods[methods_count];  
u2 attributes_count;  
attribute_info attributes[attributes_count];  
}


ca fe ba be 00 00 00 32 00 28 07 00 02 01 00 1b  
이 값과 함께 클래스 파일 포맷을 간단히 살펴 보자
magic: 클래스 파일의 첫 4바이트는 magic number이다. 이는 자바 클래스 파일을 구별하기 위해 미리 지정해 둔 값을 의미하며, 위의 Hex Editor 값에서 볼 수 있듯이 항상 0xCAFEBABE이다. 즉, 어떤 파일의 첫 4바이트가 0xCAFEBABE라면 이는 자바 클래스 파일이라고 일단 추측할 수 있는 것이다. "자바"라는 이름과 연관된 나름대로 위트 있는 magic s.

ca fe ba be 00 00 00 32 00 28 07 00 02 01 00 1b  
smagic: 클래스 파일의 첫 4바이트는 magic number이다. 이는 자바 클래스 파일을 구별하기 위해 미리 지정해 둔 값을 의미하며, 위의 Hex Editor 값에서 볼 수 있듯이 항상 0xCAFEBABE이다. 즉, 어떤 파일의 첫 4바이트가 0xCAFEBABE라면 이는 자바 클래스 ㄴ파일이라고 일단 추측할 수 있는 것이다. "자바"라는 이름과 연관된 나름대로 위트 있는 magic number이다.
minor_version, major_version: 다음 4바이트는 클래스 버전을 나타낸다. UserService.class 파일은 0x00000032이므로, 클래스 버전은 50.0이다. JDK 1.6로 컴파일한 클래스 파일의 버전은 50.0, JDK 1.5로 컴s파일한 클래스 파일의 버전은 49.0이다. JVM은 자신의 버전보다 하위 버전에서 컴파일된 클래스 파일에 대해서는 하위 호환성을 유지해야 한다. 반면에 하위 버전의 JVM에서 상위 버전의 클래스 파일을 실행하면 java.lang.UnsupportedClassVersionError가 발생한다.

```java
// SwitchTest
public class SwitchTest {  
  public int doSwitch(String str) {  
    switch (str) {  
    case "abc": return 1;  
    case "123": return 2;  
    default: return 0;  
    }
  }
}
```

```java
C:\Test>javap -c SwitchTest.class  
Compiled from "SwitchTest.java"  
public class SwitchTest {  
public SwitchTest();  
Code:  
0: aload_0  
1: invokespecial #1 // Method java/lang/Object."":()V  
4: return

public int doSwitch(java.lang.String);  
Code:  
0: aload_1  
1: astore_2  
2: iconst_m1  
3: istore_3  
4: aload_2  
5: invokevirtual #2 // Method java/lang/String.hashCode:()I  
8: lookupswitch { // 2  
48690: 50  
96354: 36  
default: 61  
}
36: aload_2  
37: ldc #3 // String abc  
39: invokevirtual #4 // Method java/lang/String.equals:(Ljava/lang/Object;)Z  
42: ifeq 61  
45: iconst_0  
46: istore_3  
47: goto 61  
50: aload_2  
51: ldc #5 // String 123  
53: invokevirtual #4 // Method java/lang/String.equals:(Ljava/lang/Object;)Z  
56: ifeq 61  
59: iconst_1  
60: istore_3  
61: iload_3  
62: lookupswitch { // 2  
0: 88  
1: 90  
default: 92  
}
88: iconst_1  
89: ireturn  
90: iconst_2  
91: ireturn  
92: iconst_0  
93: ireturn
```
