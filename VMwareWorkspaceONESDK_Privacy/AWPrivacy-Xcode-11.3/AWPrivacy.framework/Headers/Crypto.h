//
//  Crypto.h
//  AWPrivacy
//
//  Created by Subbu Kathiresan on 7/17/18.
//  Copyright © 2018 VMWare. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Crypto : NSObject

+ (NSString*)sha256HashFor:(NSString*)input;

@end
