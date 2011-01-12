// Copyright (c) 2010-2011, Rasmus Andersson. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.

#import "KMachServiceProtocol.h"

@interface KMachService : NSObject <KMachServiceProtocol,
                                    NSConnectionDelegate> {
  NSConnection *connection_;
  NSMutableDictionary *fileHandleWaitQueue_;
}

+ (KMachService*)sharedService;
- (id)initWithMachPortName:(NSString*)portName;

@end
