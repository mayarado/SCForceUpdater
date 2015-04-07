//
//  IIForceUpdater.h
//  ipiit
//
//  Created by Balazs on 25/01/15.
//  Copyright (c) 2015 ipiit AB. All rights reserved.
//

#import <Foundation/Foundation.h>

/** SCForceUpdater */
@interface SCForceUpdater : NSObject

+ (id)initWithITunesAppId:(NSString *)ITunesAppId
                  baseURL:(NSString *)baseURL
       versionAPIEndpoint:(NSString *)versionAPIEndpoint;
+ (void)setTitle:(NSString *)title softMessage:(NSString *)softMessage hardMessage:(NSString *)hardMessage;
+ (id)sharedUpdater;

- (void)checkForUpdate;

@end