SSH or secure shell is a network communication protocol that enable two computers to communicate and share data in an encrypted and secure manner.
SSH operates as a layered protocol suite comprising three principal hierarchical components:
1. The **user authentication protocol validates** the user to the server
2. The **transport layer** provides authentication, confidentiality and integrity.
3. The **connection protocol** that multiplexes the encrypted tunnel into multiple logical communication channels
## Public Key Authentication
Public key authentication is a way of logging into an SSH account using a cryptographic key rather than a password.
Is uses the ssh-keygen command to generate the public and private keys on the client's workstation.
A copy of the public is then added (as one line) on the remote SSH server in the ~/.ssh/authorized_keys file in the respective user directory, the private key remains on the client's computer and is never transmitted to the sender.
Public key authentication allows users whose public key is present in ~/.ssh/authorized_keys on the remote server to login by presenting a matching public key.
This file is respected by ssh if and only if it is writable by the current user and root.
## Password Authentication
SSH also supports password-based authentication that is encrypted by automatically generated transport keys. 
SSH transport public keys are exchanged when every time the client computer connect to the server
The SSH client raises a warning before accepting the public
It is possible for an attacker to spoof a legitimate server, ask for the password, and obtain it (man-in-the-middle attack). 
However, this is possible only if the two sides have never authenticated before, as SSH remembers the key that the server side previously used. 
key of a new, previously unknown server – usually one the first connection attempt.
Password authentication can be disabled from the server side.
The ssh-copy-id is used to copy, install and configure an SSH key on a server to automate password-less logins and SSO.
Alternatively Password authentication can be disabled on the system if for example only public key authentication was permitted
This can be done by setting PasswordAuthentication no in /etc/ssh/sshd_config file
## Host Base Authentication
Authorized users login without password or public key
Good for use in private network where systems share common resources
This is STRICTLY not recommended (Unless you know what you are doing)
Uses /etc/hosts.equiv or /etc/shosts.equiv (for server-wide configuration)
or ~/.shosts (for user specific configuration)
ssh-agent is a helper program that tracks identity keys and their passphrases -- from which SSH derives an encryption key -- and enables the user to use the identity keys to log in to different servers without the need to reenter passwords or passphrases.
sshd is the server damon – it initiates the SSH server, which waits for incoming SSH connection requests and enables authorized systems to connect to the server host.ssh-agent is a helper program that tracks identity keys and their passphrases -- from which SSH derives an encryption key -- and enables the user to use the identity keys to log in to different servers without the need to reenter passwords or passphrases.
ssh-add is used to add a key to the SSH authentication agent and is used with ssh-agent to implement SSO using SSH.
scp is a program used for copying files from one computer to another and is an SSH-secured version of rcp.
sftp is a program used to copy files from one computer to another and is an SSH-secured version of ftp
rsync is a program used to copy files from one computer to another 