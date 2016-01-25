//
//  KeychainTool.h
//
//  Created by CY on 16/1/9.
//

#import <Foundation/Foundation.h>

@interface KeychainTool : NSObject

+ (NSMutableDictionary *)getKeychainQuery:(NSString *)service ;

+ (void)save:(NSString *)service data:(id)data ;

+ (id)load:(NSString *)service ;

+ (void)delete:(NSString *)service ;

@end
