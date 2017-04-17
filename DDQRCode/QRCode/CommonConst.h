//
//  CommonConst.h
//  DDQRCode
//
//  Created by majianjie on 2017/4/14.
//  Copyright © 2017年 majianjie. All rights reserved.
//

#import <UIKit/UIKit.h>

//通知中心
#define NotificationCenter [NSNotificationCenter defaultCenter]
//屏幕宽度
#define kScreenWidth [UIScreen mainScreen].bounds.size.width
//屏幕高度
#define kScreenHeight [UIScreen mainScreen].bounds.size.height

/** 二维码冲击波动画时间 */
//CGFloat const QRCodeScanningLineAnimation = 0.05;

/** 从相册里得到的二维码信息 */
//NSString *const SGQRCodeInformationFromeAibum = @"QRCodeInformationFromeAibum";

/** 扫描得到的二维码信息 */
//NSString *const QRCodeInformationFromeScanning = @"QRCodeInformationFromeScanning";

/** 扫描动画线(冲击波) 的高度 */
static CGFloat const scanninglineHeight = 12;
/** 扫描内容外部View的alpha值 */
static CGFloat const scanBorderOutsideViewAlpha = 0.4;


/** 扫描内容的Y值 */
#define scan_y self.frame.size.height * 0.24
/** 扫描内容的X值 */
#define scan_x self.frame.size.width * 0.15




