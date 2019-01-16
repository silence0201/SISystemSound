//
//  ViewController.m
//  SISystemSoundDemo
//
//  Created by Silence on 2019/1/15.
//  Copyright © 2019年 Silence. All rights reserved.
//

#import "ViewController.h"
#import "SISystemSound.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    SISystemSound *sound = [[SISystemSound alloc]initWithSoundID:SISystemSoundIDAlarm];
    [sound play];
}


@end
