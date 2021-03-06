//
//  IADraggableAnimationManager.h
//  IADraggableViewControllerDemo
//
//  Created by Omar Abdelhafith on 6/23/12.
//  Copyright (c) 2012 Infusion Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IASequenceAnimations.h"

@interface IADraggableAnimationManager : NSObject

+ (void) animateViewVerticalJump:(UIView*)view toHeight:(float)height;
+ (void) animateViewDescending:(UIView*)view toHeight:(float)height;

@end
