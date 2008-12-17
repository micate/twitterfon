//
//  UserViewController.h
//  TwitterFon
//
//  Created by kaz on 11/30/08.
//  Copyright 2008 naan studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserView.h"
#import "TweetViewActionCell.h"
#import "UserTimelineCell.h"
#import "TwitterClient.h"
#import "DeleteButtonCell.h"

@interface TweetViewController : UITableViewController <UIActionSheetDelegate> {
    UserView*               userView;
    UserTimelineCell*       tweetCell;;
    TweetViewActionCell*    actionCell;
    DeleteButtonCell*       deleteCell;
    Status*                 status;
    Status*                 inReplyToStatus;
    User*                   inReplyToUser;
    TwitterClient*          twitterClient;
    BOOL                    isOwnTweet;
    BOOL                    isDirectMessage;
    int                     *sections;
}

- (id)initWithMessage:(Status*)status;
- (id)initWithMessageId:(sqlite_int64)statusId;

@end
