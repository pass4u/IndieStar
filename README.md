# IndieStar
### IndieStar는 모바일 게임의 크로스마케팅 플랫폼입니다.

## Unity Plugin
#### Unity3D용 IndieStar API를 소개합니다.
#### Unity Plugin : [Download](https://github.com/pass4u/IndieStar/blob/master/unity/IndieStarForUnity_v2.0.unitypackage)
#### Unity Sample Project : [Download](https://github.com/pass4u/IndieStar/blob/master/sample_unity_project/sample_unity_project.unitypackage)


#### 목차
> - [공통설정](#chapter-1)
>  - [PopupCloseHandler 등록](#chapter-1-1)
> - [iOS 설정](#chapter-2)
> - [Android 설정](#chapter-3)


<a id="chapter-1"></a>
### 공통설정
<a id="chapter-1-1"></a>
#### PopupCloseHandler 등록
##### IndieStar의 모든 팝업이 닫힐때 호출될 콜백 메서드를 정의합니다.
###### 아래는 'Main Camera'의 'PopupCloseHandler'메서드를 콜백 핸들러로 등록한 예 입니다.

    IndieStarForIOS.instance.RegisterPopupCloseHandler("Main Camera","PopupCloseHandler");


<a id="chapter-2"></a>
### Unity iOS 설정
#### - IndieStarForIOS Class를 Component로 셋팅합니다.
##### 1. PopupOnIndieStar 설정(Android설정과 같음)
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_5.png)

    IndieStarForAOS.instance.PopupOnIndieStar();

##### 2. MoreGameSimpleOnIndieStar 설정(Android설정과 같음)
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_6.png)

    IndieStarForAOS.instance.MoreGameSimpleOnIndieStar();


<a id="chapter-3"></a>
### Unity Android 설정
#### - IndieStarForAOS Class를 Component로 셋팅합니다.
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_1.png)

###### 1. PopupOnIndieStar 설정
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_2.png)

    IndieStarForAOS.instance.PopupOnIndieStar();

###### 2. MoreGameSimpleOnIndieStar 설정
![Alt component 설정](https://github.com/pass4u/IndieStar/blob/master/res/api_3.png)

    IndieStarForAOS.instance.MoreGameSimpleOnIndieStar();


#### IndieStarView Activity 를 AndroidManifest.xml에 등록합니다.
##### Activity 를 설정합니다.
    <activity android:name="com.longtu.indiestar.IndieStarView" android:screenOrientation="sensorLandscape" android:theme="@android:style/Theme.Translucent"/>


#### InstallReferrer 를 AndroidManifest.xml에 등록합니다.
##### Install Referrer 수집을 위한 receiver를 설정합니다.
    <receiver android:name="com.longtu.indiestar.InstallReferrerReceiver" android:exported="true">
      <intent-filter>
        <action android:name="com.android.vending.INSTALL_REFERRER" />
      </intent-filter>
    </receiver>
