# IndieStar
### IndieStar는 모바일 게임의 크로스마케팅 플랫폼입니다.

## Unity Plugin
#### Unity3D용 IndieStar API를 소개합니다.
#### Unity Plugin : [Download](https://github.com/pass4u/IndieStar/blob/master/unity/IndieStarForUnity_v2.0.unitypackage)
#### Unity Sample Project : [Download](https://github.com/pass4u/IndieStar/blob/master/sample_unity_project/sample_unity_project.unitypackage)


#### 목차
> - [Unity iOS 설정](#chapter-2)
>  - [StartIndieStar 설정](#chapter-2-1)
>  - [PopupOnIndieStar 설정](#chapter-2-1)
>  - [MoreGameSimpleOnIndieStar 설정](#chapter-2-1)
>  - [PopupCloseHandler 등록](#chapter-2-4)
> - [Unity Android 설정](#chapter-3)
>  - [StartIndieStar 설정](#chapter-3-1)
>  - [PopupOnIndieStar 설정](#chapter-3-2)
>  - [MoreGameSimpleOnIndieStar 설정](#chapter-3-3)
>  - [PopupCloseHandler 등록](#chapter-3-4)
>  - [IndieStarView 설정](#chapter-3-4)
>  - [InstallReferrer 설정](#chapter-3-5)
> - [Release Note](#chapter-4)



<a id="chapter-2"></a>
### Unity iOS 설정
#### - IndieStarForIOS Class를 Component로 셋팅합니다.
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_1.png)

<a id="chapter-2-1"></a>
##### 1. StartIndieStar 설정
###### - IndieStar를 초기화 하는 과정으로, apple appid, IndieStar 등록 id, package name을 입력합니다. Unity의 Start 함수에 정의하는 것이 좋습니다. 최초 1회만 호출되도록 코드 추가 합니다.
###### parameter
> apple app id : "apple 앱 아이디" : string

> indiestar id : "indiestar 등록시 발급받은 아이디" : string

> package name : "패키지 네임" : string

    IndieStarForIOS.instance.StartIndieStar ("1099756918", "mAMhxd7sr6gqkFJej", "com.example.app");

<a id="chapter-2-2"></a>
##### 2. PopupOnIndieStar 설정(Android설정과 같음)
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_5.png)
###### - IndieStar 전면팝업을 띄우는 메서드 입니다.

    IndieStarForIOS.instance.PopupOnIndieStar();

<a id="chapter-2-3"></a>
##### 3. MoreGameSimpleOnIndieStar 설정(Android설정과 같음)
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_6.png)
###### - IndieStar 오퍼월을 띄우는 메서드 입니다.

    IndieStarForIOS.instance.MoreGameSimpleOnIndieStar();

<a id="chapter-2-4"></a>
##### 4. PopupCloseHandler 등록
###### - IndieStar의 모든 팝업이 닫힐때 호출될 콜백 메서드를 정의합니다.
###### parameter
> GameObject name : string

> Method name : string

        IndieStarForIOS.instance.RegisterPopupCloseHandler("Main Camera","PopupCloseHandler");


<a id="chapter-3"></a>
### Unity Android 설정
#### - IndieStarForAOS Class를 Component로 셋팅합니다.
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_1.png)

<a id="chapter-3-1"></a>
##### 1. StartIndieStar 설정
###### - IndieStar를 초기화 하는 과정으로 IndieStar 등록 id, package name을 입력합니다. Unity의 Start 함수에 정의하는 것이 좋습니다. 최초 1회만 호출되도록 코드 추가 합니다.
###### parameter

> indiestar id : "indiestar 등록시 발급받은 아이디"

> package name : "패키지 네임"

    IndieStarForAOS.instance.StartIndieStar ("mAMhxd7sr6gqkFJej", "com.example.app");

<a id="chapter-3-2"></a>    
##### 2. PopupOnIndieStar 설정(iOS설정과 같음)
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_2.png)

    IndieStarForAOS.instance.PopupOnIndieStar();
<a id="chapter-3-3"></a>
##### 3. MoreGameSimpleOnIndieStar 설정(iOS설정과 같음)
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_3.png)

    IndieStarForAOS.instance.MoreGameSimpleOnIndieStar();

<a id="chapter-3-4"></a>
##### 4. PopupCloseHandler 등록
###### - IndieStar의 모든 팝업이 닫힐때 호출될 콜백 메서드를 정의합니다.
###### parameter
> GameObject name : string

> Method name : string


    IndieStarForAOS.instance.RegisterPopupCloseHandler("Main Camera","PopupCloseHandler");


<a id="chapter-3-5"></a>
##### 5. IndieStarView 설정
###### - IndieStarView Activity 를 AndroidManifest.xml에 추가합니다.
    <activity android:name="com.longtu.indiestar.IndieStarView" android:screenOrientation="sensorLandscape" android:theme="@android:style/Theme.Translucent"/>


<a id="chapter-3-6"></a>
##### 6. InstallReferrer 설정
###### - InstallReferrer 를 AndroidManifest.xml에 추가합니다.
    <receiver android:name="com.longtu.indiestar.InstallReferrerReceiver" android:exported="true">
      <intent-filter>
        <action android:name="com.android.vending.INSTALL_REFERRER" />
      </intent-filter>
    </receiver>



<a id="chapter-4"></a>
#### Release note
##### V2.1 - 2017.02.23
###### - Android IndieStar 팝업 실행시 Crash 수정(AOS 5.0이상에서 발생)
