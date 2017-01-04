#pragma once

#include "platform.h"
#include <string>

class Connection
{
    public:
        Connection(int sock_type, const char* ip = NULL, const char* port = "0", 
            int family = AF_INET, bool reuse = false);
        int bind();
    private:
        int uv_ip_addr(const char* ip, int port, struct sockaddr* addr);

        int         m_family;
        bool        m_reuse;
        int         m_sock_type;
        std::string m_ip;
        std::string m_port;
};
