#include "stdafx.h"
#include "message.h"


typedef struct _WECHAT_SDK_MESSAGE
{
    int size;//
    int major;//�������ܺ�
    int minor;//0�����ã�1������ֵ
    void* callback;//
    char buf[1];
}WechatSdkMsg, *PWechatSdkMsg;

//client
