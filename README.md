# iOS-keychain

 <h4> use it to save your password to keychain for safety </h4>
 
 <h5> You can use those api to handle password in your project</h5>
 ```objective-c
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
```
