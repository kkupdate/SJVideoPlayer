//
//  SJVideoPlayerSettings.h
//  SJVideoPlayerProject
//
//  Created by BlueDancer on 2017/9/25.
//  Copyright © 2017年 SanJiang. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSNotificationName const SJSettingsPlayerNotification;

@class UIImage, UIColor;

@interface SJVideoPlayerSettings : NSObject

/// shared
+ (instancetype)commonSettings;

- (void)reset;

// MARK: placeholder
@property (nonatomic, strong, readwrite) UIImage *placeholder;

// MARK: fast/forward
@property (nonatomic, strong, readwrite) UIImage *fastImage;
@property (nonatomic, strong, readwrite) UIImage *forwardImage;

// MARK: btns
@property (nonatomic, strong, readwrite) UIImage *backBtnImage;
@property (nonatomic, strong, readwrite) UIImage *playBtnImage;
@property (nonatomic, strong, readwrite) UIImage *pauseBtnImage;
@property (nonatomic, strong, readwrite) UIImage *replayBtnImage;
@property (nonatomic, strong, readwrite) NSString *replayBtnTitle;
@property (nonatomic, assign, readwrite) float replayBtnFontSize;
@property (nonatomic, strong, readwrite) UIImage *fullBtnImage;
@property (nonatomic, strong, readwrite) UIImage *previewBtnImage;
@property (nonatomic, strong, readwrite) UIImage *moreBtnImage;
@property (nonatomic, strong, readwrite) UIImage *lockBtnImage;
@property (nonatomic, strong, readwrite) UIImage *unlockBtnImage;

// MARK: progress slider
/// 轨迹, 走过的痕迹
@property (nonatomic, strong, readwrite) UIColor *progress_traceColor;
/// 轨道
@property (nonatomic, strong, readwrite) UIColor *progress_trackColor;
/// 拇指图片, 也可设置`progress_thumbSize`.(图片优先)
@property (nonatomic, strong, readwrite) UIImage *progress_thumbImage;
/// 拇指大小, 也可设置`progress_thumbImage`. default is 0.
@property (nonatomic, assign, readwrite) float progress_thumbSize;
@property (nonatomic, assign, readwrite) UIColor *progress_thumbColor;
/// 缓冲颜色
@property (nonatomic, strong, readwrite) UIColor *progress_bufferColor;
/// 轨道高度
@property (nonatomic, assign, readwrite) float progress_traceHeight;

// MARK:  more slider
/// 轨迹
@property (nonatomic, strong, readwrite) UIColor *more_traceColor;
/// 轨道
@property (nonatomic, strong, readwrite) UIColor *more_trackColor;
/// 轨道高度
@property (nonatomic, assign, readwrite) float more_trackHeight;

// MARK: loading
@property (nonatomic, strong, readwrite) UIColor *loadingLineColor;

@end
