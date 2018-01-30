#ifndef TC_IOT_TOKEN_H
#define TC_IOT_TOKEN_H


/**
 * @brief http_refresh_auth_token 请求 MQTT 访问服务端动态用户名和密码
 *
 * @param api_url 请求接口的地址
 * @param root_ca_path 额外加载证书地址，一般填 NULL 即可
 * @param p_device_info 设备信息，请求成功后，会自动更新该对象的 username 和
 *  password 成员数据
 *
 * @return 结果返回码
 * @see tc_iot_sys_code_e
 */
int http_refresh_auth_token(const char* api_url, char* root_ca_path,
                            tc_iot_device_info* p_device_info);

#endif /* end of include guard */
