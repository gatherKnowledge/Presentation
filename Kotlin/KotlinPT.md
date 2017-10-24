#### 발표 전략
- 개요 ; why we should go Kotlin?
  현재 오라클의 행태는 더 이상 자바를 오픈 소스로 두려고 하는 것 같지 않다
 크게는 우리에게 알려진 구글의 안드로이드와의 관계에서부터, 작게는 이미 소형전자기기에 들어가는 임베디드 자바까지.  유료화는 우리가 알 수 있을 정도로 진행이 됐었는데, 썬마이크로시스템즈가 오라클에 넘어간 시점, 그리고  제임스 고슬링이 오라클을 나온 시점,  이미 자바 홈페이지에 가보면 기존 SE를 제외한, Advanced 자바 계열은 유료화가 진행되고 있다. 거기에 우리나라는 훨씬 더 많은 리스크를 지고 있다, 이미 우리나라는 전자정부표준프레임워크라고하는 자바의 표준까지 만들어 둔 상태이기 때문에 이미 자바 독점체제가 갖춰진 시장 상태.
 그에 따라 구글의 안드로이드는 N시리즈에서부터 기존 자바(oracle)를 사용하지 않고 새로운 자바(open java)를 사용하고 있다. (아시는 분들은 저보다 더 상세히 아시겠지만, 2010년 오라클은 구글에 API 37종의 구조/순서/조직을 배꼈다고 안드로이드에 10조~11조에 달하는 설계 소송을 제기했고 몇 번 법원을 왔다갔다 하고 올해 양 측의 다툼은 7년째를 맞이)

왜 안드로이드 얘기를 하는데 갑자기 웹 개발이야기를 슬쩍 끼워 넣는가 하시는 분들도 있을텐데,  과연 오라클의 승리로 끝난다고하면 안드로이드에서만 그 소송이 멈출까 싶은 것. 우리나라에서 거의 표준으로 쓰다시피 한 전자정부표준프레임워크 역시 어떻게든 문제가 생길 수 있음. 정말로 전정프가 문제가 생기면 기존처럼 사용할 수는 없을 것, 그렇다면 우리나라의 개발자 대부분을 차지하고 있는 자바 개발자들을 그대로 돌려 쓰려면 어떤 언어를 써야 할까요?  게다가 기존 유지보수 역시 JVM 환경에서 돌릴 수 있는 코틀린을 쓰게 할 것인가 아니면 아예 새로운 언어로 갈 것 인가, 이 결과 불 보듯 뻔한 결과.
--> 이것이 정치적인 문제로 지금 자바를 코틀린으로 바꿔야 할 이유
+ 정치/사회적인 문제뿐만 아니라 코틀린은 이미 Advanced Java라는 타이틀이 붙을 정도로 많은 점에서 자바를 대체할 대체제가 되어 가고 있다 심지어 이미 코틀린을 접해 본 많은 개발자들이 하나 같이 이야기하는 것이 코틀린 개발에서 자바 개발로 돌아오고 싶지 않다는 내용
재빠르게 변화해가는 프로그래밍, 그리고 그 외적인 환경들에 발맞춰가는 개발자가 되어야 할 것 -->  

0. 코틀린 전체 개요
 우선 JetBrains라는 회사에서 2010년 개발한 정적 언어로, 자바의 대체재로 만들기 위해서 만들어진 언어입니다. 2010년하면 자바가 오라클로 넘어간 시기인데, 우연치 않은 것인지 아니면 업계에서는 진작에 어딘가의 소스를 듣고 만들었던 것인지, 코틀린의 개발년도  2010년도와 맞아 떨어짐. 코틀린의 이름 자체는, 자바가 인도네시아 자바섬으로 지었듯이, 마찬가지로 발트 해 핀란드 만의 입구에 위치한  15km2크기 밖에 되지 않는 러시아의 코틀린이라는 섬을 모티브로 이름을 따왔다.

3. 개발회사 정보 JETBRAINS
  JetBrain사, 2000년에 설립 된 소프트웨어 개발 회사로 본사는 체코의 프라하에 위치 해있다. 직원 수 700명 이상으로 대표적인 제품으로 intelliJ, pycharm등 개발툴들을 개발하고, 2010년에는 코틀린을 개발한 기술력 있는 회사이기도 합니다. 현재도 다양한 언어툴을 지원하기 위해 개발중에 있고 최근에는 Go언어를 위한 `gogland`를 개발 및 테스트 중에 있다.  2011년에는 JVM환경에서 동작하는 코틀린이라는 언어를 개발해서 "Technology of the Year Award"를 받은 수상 내역이 있다고 합니다. 이번 년도 5월에는 코틀린이 안드로이드 정식 언어로 채택 되는 덕분에 더욱 주가를 올리고 있다.
**대표 Product 목록
 2.1 AppCode
 2.2 CLion
 2.3 DataGrip
 2.4 Gogland
 2.5 Hub
 2.6 IntelliJ IDEA
 2.7 Kotlin
 2.8 MPS
 2.9 PhpStorm
 2.10 PyCharm
 2.11 ReSharper Ultimate
 2.12 Rider
 2.13 RubyMine
 2.14 TeamCity
 2.15 Toolbox App
 2.16 Upsource
 2.17 WebStorm
 2.18 YouTrack**
 이 중에서 특히 안드로이드 스튜디오는 인텔리제이를 기본으로 만들어 진 툴. 둘 다 자바를 공통으로 사용하다 보니 자연스러운 일이 되겠고, 그리고 우리가 앞으로 공부하게 될 코틀린 자체도. 이야기 안 해도 아시겠죠?

http://imcreator.tistory.com/113
풀스택 언어를 지향, 현재 풀스택언어는 자바스크립트, 어플리케이션들의 모든 구성요소를 코틀린으로만으로 만들 수 있다는 것. 기존에 쓰레드를 쓰던 방식을 적용할 수 있는게, 코루틴 역시도 반환값을 반환하기 전에 실행이 완료 됨. 즉 함수에서 수행되는 작업은 하나의 프레임에서 수행된다는 것을 의미하고 함수 호출은 절차적 애니메이션을 포함하거나 시간의 경과와 함께 일련의 이벤트에는 사용할 수 없습니다.

코루틴을 지원한다는 이야기는 무슨 이야기?
코루틴이란 것은 한 언어에서 동작하는 어떤 것이 아닌, 작업을 처리 할 때 필요에 따라서 시간의 간격을 두고 작업을 처리할 수 있도록 도와주는 함수 형식. 유니티 같은 게임 만드는 툴에서 많이 사용되는 기능이라고함 C#. 사라지게 하는 코드들이 보통 투명도를 높혀서 사라지게 하는 것인데 일정한 시간 초간격으로 약간씩 투명도를 낮추는 식으로 구현이ㅌ 되기 때문에 코루틴 기능에 대한 사용성

- 자바 스크립트로 컴파일 될 수도 있다. 도대체 자바 스크립트가 컴파일 될 수 있는 것이 무슨 말이지??
- 함수 사용 스타일 agr가 우선적으로 오고 타입이 그 다음으로 온다.
- 종결마크가 없다.
- return 타입이 없다. 자바 스크립트에서 보이던 문법 아닌가

그래서 이렇게 코틀린이 주는 장점이 많은데, 그럼 기존 우리가 자바에서 사용하던 방식으로 코딩이 불가능 하냐. 이것도 아니다 라는 얘기입니다. 그래서 다음 장, 기존 소스에서 코드가 변경되는 것을 보여드릴텐데요.
http://imcreator.tistory.com/113
- 자바가 주지 않는 코틀린 언어의 편안함

4. 기존 자바 소스의 코틀린 스타일 소스들을 보여주고, 심지어 스프링도 코틀린 버전으로 변경되는 작업이 진행 중이라는 것.
http://wonwoo.ml/index.php/post/1427
걱정 할 수 있는 부분, 기존 방대한 자바의 라이브러리를 사용 못 하는가?
이미 많은 라이브러리들이 코틀린용으로 변환이 진행중이다. 대표적인 라이브러리들은 홈페이지 자체에서도 다운로드 가능하고, 아마 약간의 지원을 받는 것 같음,  홈페이지에 게시되는 라이브러리들은, 그리고 그 외 깃허브에 공유되고 있는 소스 역시  2천개 이상이 있다.

5. 공부 방법
지금까지 보셨다시피 기존 경험있는 문법 자체나 개발 패러다임이 변하는 것이 아닌 진짜, Advanced Java라는 말이 어울리게, 기존의 자바 개발에서 귀찮았던 부분들이 없어 지는 것이기 때문에, 바 개발자경험있는 자바 개발자들은 불과 몇 시간이면 적응하고 바로 개발에 들어갈 수 있다.

6. 현재 점유율과 상용기업들 Service
현재 생성되고 있는 안드로이드 프로젝트의 약 20퍼센트 차지하고있다, 이 데이터를 기반으로 렐림은 코틀린이 2018년 12월이면 안드로이드 환경에서 자바를 앞지를 것이라고 예측하고 있는데요. 코틀린은 자바가 서버에서 사용되는 방식도 바꿔 놓을 수 있는데, 렐름은 “간단히 말해, 코틀린 기술을 사용하지 않는 안드로이드 개발자는 금방 구시대 유물로 보여질 위험에 처할 것”이라고 설명했다.
http://www.itworld.co.kr/news/106663#csidx8d6d45dcf2ce950b0d612056f90c965
그래서 이미 도입 한 기업들이 많다.  Pinterest, Gradle, Evernote, Uber, Pivotal

7. 결론
이미 안정성으로도 어느 정도 검증됐고,  대기업들도 빠르게 기존 소스들을 코틀린으로 변경해나가고 새로운 앱을 코틀린으로 개발해 나가는 추세에 언제까지 자바만 붙잡고 있을 것인가?


PPT만들면서 느끼는 것
- fun 함수명.. 이 스타일 어디서 많이 본 것 같지 않니? 자바스크립트 <==> 서로 쉽게 호환이 가능한 이유

---
붙혀 넣을 소스
코틀린 기본 문법
코틀린은 ;을 사용하지 않고, 아래와 같이 변수 타입이 뒤에 붙는 형태입니다.

또한 변수 타입을 지정하지 않을 수도 있습니다.

```JAVA
// java
int temp = 10 ;
const in temp = 15 ;
// Kotlin
val temp: Int = 10
var temp = 15
```

코틀린 기본 문법 - val, var
코틀린에는 2가지 변수 선언 방식이 있습니다.

val : 변할 수 없는 상수 Java : final, C/C++ 등에서는 const
var : 일반적인 변수에 해당합니다.
val

val은 read-only이면서 로컬 변수가 됩니다. java에서는 final, c/c++에서는 const에 해당합니다. 초기화 이후 변할 수 없는 값을 말하게 됩니다.

val a: Int = 1
val b = 1  // Int를 추론할 수 있습니다.
val c: Int  // Int를 초기화해주어야 하는데 생성자에서 초기화해야 합니다.
  c = 100 // 생성자 시점에서 초기화해주지 않으면 문법상 오류가 발생합니다.
var

var은 일반적인 변수에 해당합니다.

var x = 5 // Int를 추론할 수 있음
x += 10

// 추론은 가능하지만 실제 값이 Int가 아니더라도 오류가 발생하지는 않음
var x: Int = 1 // Int를 고정
x = 15
var은 val과 달리 값이 변할 수 있습니다.

val과 var 두 개 모두 Int, Long 등의 타입을 지정할 수도, 없을 수도 있습니다.

지정하지 않아도 추론을 통해서 Int 인지 String 인지 확인이 가능하지만, 이 경우 코드의 실수를 할 수 있으므로 지정하는 게 좋을 것 같습니다.



코틀린 기본 문법 - 함수 생성
자바에서는 아래와 같이 함수를 생성합니다.
```JAVA
//Java
public int sum(int a, int b) {
  return a + b;
}
//Kotlin
fun sum(a: Int, b: Int): Int {
  return a + b
}
```

가장 기본적인 Kotlin 형태로 변환하면 위와 같습니다.

Java와 기본 형태가 다른데 왼쪽에

int 함수명(변수 타입 변수명) { return 값 }
을 가지는 반면 Kotlin은

fun 함수명(변수명: 변수 타입): 리턴 타입 { return 값 }
의 형태를 가지게 됩니다.

코틀린은 좀 더 단순하게 만들 수 있습니다.

// 아래와 같이 Type을 정의하여 return을 정의하거나
fun sum(a: Int, b: Int): Int = a + b
// 또는 아래와 같이 바로 return도 가능합니다.
fun sum(a: Int, b: Int) = a + b
한 줄로 표현도 가능합니다. 변수 타입을 명시하거나, 하지 않을 수도 있고 = 을 이용하여 단순히 이 함수가 리턴을 의미하도록 함축적으로 표현 할 수 있습니다.

함수에 조건식을 추가하면 다음처럼 됩니다.
```JAVA
fun max(a: Int, b: Int): Int {
  if (a > b) return a
  else return b
}

fun max(a: Int, b: Int) = if (a > b) a else b
```
위와 같이 단순하게 if 문을 포함하여 한 줄로 줄여줄 수 있습니다.

의미는 똑같습니다. a가 b보다 크면 a를 return 하고 아니면 b를 리턴하게 됩니다.



코틀린 기본 문법 - null
코틀린의 기본 변수는 null을 가질 수 없습니다.
```JAVA
var a: Int = 15
a = null // 문법상 오류 발생

var b: Int? = null
b = null  // 정상 수행
```

위와 같이 물음표를 추가해주었을 때만 null을 명시할 수 있습니다.

nullable : ?
nullable 이면 오류 발생 : !!
물음표와 느낌표 2개를 사용하는 경우가 있습니다. 일단 의미는 위와 같습니다.

물음표는 null이고, !!는 nullable 이면 오류가 발생하게 됩니다.

함수에서 null은 다음과 같이 정의할 수 있습니다.

아래 함수는 ABC 객체의 a를 return 하게 됩니다.
이때 a는 Int이면서 null이 될 수 있도록 return type에 물음표를 추가하였습니다.
// ABC 객체의 .a를 return 하지만 abc가 null이면 null을 리턴합니다.
```JAVA
fun abc(abc: ABC?): Int? {
  // ...
  return abc?.a
}
```

코틀린 기본 문법 - Any 사용하기
type을 Any라는 키워드로 지정할 수 있습니다.
```JAVA
fun getStringLength(obj: Any): Int? {
  if (obj is String) {
    // 'obj' is automatically cast to 'String' int this branch
    return obj.length
  }
  // 'obj' is still of type 'Any'
  // Type이 String이 아니라서 null을 return 하게 됩니다.
  return null
}
Any는 Java의 Object에 해당 대며 is는 instanceof와 같은 행동을 합니다.

위의 형태를 java 코드로 구현하면 다음과 같습니다.

int getStringLength(Object obj) {
  if (obj instanceof String) {
    return obj.length;
  }

  return 0;
}
```
is String이 아님을 나타낼 대는 is앞에 “!” 간단하게 부정할 수 있습니다.
```JAVA
// Java에서는
int getStringLength(Object obj) {
  if (!(obj instanceof String)) return 0;
  return obj.length;
}

// Kotlin
fun getStringLength(obj: Any): Int? {
  if (obj !is String) return null
  return obj.length
}
```

코틀린 기본 문법 - loop
코틀린의 loop는 Java와 비슷합니다.

for loop은 아래와 같이 java와 Kotlin을 정의할 수 있습니다.

while이나 fori도 비슷합니다.
```JAVA
// Java for
ArrayList<String> arrayList = new ArrayList<>();
for (String s : arrayList) {
    Log.d("TAG", "string : " + s);
}

// Kotlin
val arrayList = ArrayList<String>()
for (s in arrayList) {
    Log.d("TAG", "string : " + s)
}
```

코틀린 기본 문법 - when
코틀린에는 when이라는 키워드가 있습니다.

when은 if 문을 중첩하여 사용하지 않고 간단하게 Any와 함께 구현이 가능합니다.

Try Kotlin 코드 실행하기 : Use When.kt - Try Kotlin
```JAVA
fun main(args: Array<String>) {
    cases("Hello") // String
    cases(1) // Int
    cases(System.currentTimeMillis()) // Long
    cases(MyClass()) // Not a string
    cases("hello") // Unknown
}

fun cases(obj: Any) {
    when (obj) {
        1 -> println("One")
        "Hello" -> println("Greeting")
        is Long -> println("Long")
        !is String -> println("Not a string")
        else -> println("Unknown")
    }
}
```
위의 예제를 실행하면 결과는 아래와 같습니다.

코틀린 기본 문법 - ranges
숫자의 범위를 지정하여 사용하는 방법입니다.

이해하기 쉽도록 for loop에서 사용하는 방법을 먼저 설명해보겠습니다.

java의 for 문에서는 i = 1에서 5까지 출력하는 방법을 아래와 같이 작성하였습니다.
```JAVA
// java
for (int i = 1; i <= 5; i++) {
  Log.i("TAG", "index : " + i);
}
코틀린에서는 ranges를 통해서 아래와 같이 1~5까지의 값을 출력하는 for loop을 만들 수 있습니다.

// Kotlin
for (x in 1..5) {
  println(x)
}
```
Kotlin에서는 ranges 형태를 if 문에서도 사용 가능합니다.

Try Kotlin 코드 실행하기 : Try Kotlin - ranges and in
```JAVA
val array = arrayList<String>
array.add("aaa")
array.add("bbb")

val x = 3

if (x !in 0..array.size - 1)
  println("Out: array 사이즈는 ${array.size} 요청한 x = ${x}")

//위의 출력 값은
// Out: array 사이즈는 2 요청한 x = 3
```
---
