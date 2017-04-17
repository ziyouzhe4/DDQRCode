//
//  QRCodeScanningView.h
//  DDQRCode
//
//  Created by majianjie on 2017/4/14.
//  Copyright © 2017年 majianjie. All rights reserved.
//

#import <UIKit/UIKit.h>





@interface QRCodeScanningView : UIView


+ (instancetype)scanningViewWithFrame:(CGRect )frame layer:(CALayer *)layer;

- (void)addTimer;

- (void)removeTimer;



@end
