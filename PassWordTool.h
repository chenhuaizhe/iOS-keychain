//
//  PassWordTool.h
//
//  Created by CY on 16/1/9.
//

#import <Foundation/Foundation.h>

@interface PassWordTool : NSObject
/**
 *    @brief    存储密码
 *
 *    @param     password     密码内容
 */
+(void)savePassWord:(NSString *)password;

/**
 *    @brief    读取密码
 *
 *    @return    密码内容
 */
+(id)readPassWord;

/**
 *    @brief    删除密码数据
 */
+(void)deletePassWord;

@end
