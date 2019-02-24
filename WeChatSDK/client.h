#pragma once

//#include "../common/ipc/ipc_message.h"
#include "../common/ipc/ipc_common.h"
#include "../common/ipc/ipc_listener.h"

class CallClient : public IPC::Listener
{
public:
    CallClient();
    ~CallClient();


    // ͨ�� Listener �̳�
    virtual bool OnMessageReceived(IPC::Message * message) override;

    virtual void OnChannelConnected(int32 peer_pid);

    virtual void OnChannelError();
};

