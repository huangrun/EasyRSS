//
//  FeedCell.h
//  rssreader
//
//  Created by 朱潮 on 14-8-24.
//  Copyright (c) 2014年 zhuchao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Feed.h"
@interface FeedCell : UITableViewCell
@property(nonatomic,retain)UIImageView *logoImageView;
@property(nonatomic,retain)UILabel *titleLabel;
@property(nonatomic,retain)UILabel *numberLabel;
@property(nonatomic,retain)UILongPressGestureRecognizer *longPress;
-(void)reload:(Feed *)feed;
@end
