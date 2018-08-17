//
//  RTLog.h
//  RTLog
//
//  Created by Felix on 2018/6/27.
//  Copyright © 2018年 felix.rtlog.oc. All rights reserved.
//

#import "iConsole.h"

#ifndef RTLog_h
#define RTLog_h

#ifdef DEBUG
#define RTLog( s, ... )  [iConsole log:@"%@",[NSString stringWithFormat:(s), ##__VA_ARGS__]]
#else
#define RTLog( s, ... )
#endif

#endif /* RTLog_h */
