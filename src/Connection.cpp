#include "Connection.h"

Connection::Connection(int sock_type, const char* ip, const char* port, 
    int family, bool reuse): 
    m_sock_type(sock_type), 
    m_ip(ip), 
    m_port(port), 
    m_family(family), 
    m_reuse(reuse)
{
    if(m_family == AF_INET && m_node.length() == 0)
        m_node = string("0.0.0.0");
    else if(m_family == AF_INET6 && m_node.length() == 0)
        m_node = string("::");
}

int Connection::uv_ip_addr(const char* ip, int port, struct sockaddr* addr)
{
    if(m_family == AF_INET)
        return 0;
}

int bind()
{

}