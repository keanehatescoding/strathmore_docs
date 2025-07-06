As a security features, Cisco routers separate management access into the following command modes:
1. __User EXEC mode/View only mode__ - This mode has limited capabilities but it is useful for basic operations. It allows a limited number of basic monitoring commands but does allow you to change the router configuration. It's prompt ends with a __>__.
2. __Privileged EXEC mode__ - to execute configuration commands a network admin must access this mode. Higher configuration modes e.g. global configuration mode can only be reached from the this mode. To enter this mode from user EXEC mode type __enable__ and __disable__ for vice versa. It's prompt ends with a __#__. 
3. __Global Configuration mode__ - this is a branch of privileged EXEC mode that is used to configure settings that affect the entire device. To enter this mode from privileged EXEC mode type __config terminal__ and __exit__ for vice versa. It is identified with a prompt that ends with __(config)#__

You must first enter global configuration mode before you enter other specific configuration modes. Each of these modes allows you to configure specific part or function of the device. Two common sub-configuration modes are:
1. __Line configuration mode__ - used to configure console, telnet, ssh or AUX access. To enter this mode from the global config mode type __line console 0__ and to leave type __exit__.The prompt ends with __(config-line)#__.
2. __Interface configuration mode__ - used to configure a switch port or router interface. The prompt ends with __(config-if)#__.
To move from any global sub-configuration mode to one level above type __exit__. While if you want to quickly go to user EXEC mode from a global sub-configuration mode type __end__.
You can also quickly mode from one global sub-configuration to another i.e.
```sh
S1(config-line)# interface g0/1
S1(config-if)#
```
