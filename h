R1(Config)#int f0/0
(Config-if)#ip add 10.10.10.1 255.255.255.0
no shut
(config-if)#int f0/1
(Config-if)#ip add 10.10.20.1 255.255.255.0
(config-if)#no shut
(config-if)#service dhcp
(config)#ip dhcp pool gns3
(dhcp-config)#network 10.10.10.1 255.255.255.0
(dhcp-config)#default-router 10.10.10.1
(dhcp-config)#dns-server 10.10.10.2
(dhcp-config)#domain-name gns3.com
(dhcp-config)#ip dhcp pool gns31
(dhcp-config)#network 10.10.20.1 255.255.255.0
(dhcp-config)#default-router 10.10.20.1 255.255.255.0
(dhcp-config)#domain-name gns3.com
(dhcp-config)#exit



