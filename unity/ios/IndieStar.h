//
//  IndieStar.h
//  IndieStar
//
//  Created by brian on 2017. 2. 3..
//  Copyright © 2017년 brian. All rights reserved.
//
//
//  IndiStarCrosswall.h
//  IndiStarBox
//
//  Created by devman on 2016. 11. 29..
//  Copyright © 2016년 longtu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


@interface IndieStar : NSObject<UIWebViewDelegate>{
    UIWebView* webView;
    NSString *app_id;
    NSString *indiestar_id;
    NSString *package_name;
    NSString *UID;
    
    //close handler
    NSString* class_name;
    NSString* method_name;
    
}


- (id)init;
- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request
 navigationType:(UIWebViewNavigationType)navigationType;

+ (IndieStar *)sharedInstance;
-(void)RegisterCloseHandlerFunc:(const char*)_class_name method:(const char*)_method;
-(void)IndieStarStart:(NSString*)_app_id indiestar_id:(NSString*)_indiestar_id package_name:(NSString*)_package_name;
-(void)IndieStarMoreGameSimple;
-(void)IndieStarAd;



@end

extern "C"{
    extern void UnitySendMessage(const char* obj, const char* method, const char* msg);
    extern UIViewController * UnityGetGLViewController();
    
}
