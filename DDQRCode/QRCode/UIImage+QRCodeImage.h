//
//  UIImage+QRCodeImage.h
//  DDQRCode
//
//  Created by majianjie on 2017/4/14.
//  Copyright © 2017年 majianjie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (QRCodeImage)

/** 返回一张不超过屏幕尺寸的 image */
+ (UIImage *)imageSizeWithScreenImage:(UIImage *)image;



@end
