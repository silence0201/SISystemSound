//
//  SISystemSound.h
//  SISystemSoundDemo
//
//  Created by Silence on 2019/1/15.
//  Copyright © 2019年 Silence. All rights reserved.
//

#import <AudioToolbox/AudioToolbox.h>
#import "SISystemSoundID.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const SISystemSoundsWillPlayNotification;
extern NSString *const SISystemSoundsDidPlayNotification;

extern NSString *const SISystemSoundWillPlayNotification;
extern NSString *const AKSystemSoundDidPlayNotification;

@interface SISystemSound : NSObject 

- (id)initWithName:(NSString*)name;
- (id)initWithPath:(NSString*)path;
- (id)initWithSoundID:(SISystemSoundID)soundID;

- (void)play;

- (SISystemSoundID)scheduleRepeatWithInterval:(NSTimeInterval)interval;
- (SISystemSoundID)schedulePlayInInterval:(NSTimeInterval)delta;
- (SISystemSoundID)schedulePlayAtDate:(NSDate*)date;
+ (void)unscheduleSoundID:(SISystemSoundID)soundID;

+ (SISystemSound *)soundWithName:(NSString*)name;

@end

NS_ASSUME_NONNULL_END
