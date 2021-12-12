//
//  PNG.h
//  PNGIconsCompressTool
//
//  Created by Minger on 2019/11/7.
//  Copyright © 2019年 Techcode. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PNG : NSObject

@property (nonatomic) NSString  *fileName;
@property (nonatomic) CGFloat    basePt;
@property (nonatomic) NSInteger  multiply;

+ (PNG *)_1x;
+ (PNG *)_2x;
+ (PNG *)_3x;
- (PNG *)pt:(CGFloat)pt name:(NSString *)name;

@end
