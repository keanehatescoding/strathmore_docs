SSL/TLS handshake is performed to encrypt the communication between client and server through the following steps:

__Client Hello Message__: The client sends a hello message to the server; it includes the client TLS version and the cipher suite that the client supports, in addition to random bytes.
__Server Hello Message__: The server responds with a hello message, highlighting its certificate, chosen cipher suite and random bytes.
__Authentication__: The client authenticates the server’s certificate through the certificate authority that issued it. For example, when we visit Google, Google shares its certificate. The received certificate is verified by our browser, which is pre-installed with the certificates of various certificate authorities.
__Premaster Secret__: The client encrypts random bytes with the server’s public key. (The client retrieves the public key from the server’s certificate.)
__Decryption of Premaster__: The server decrypts the premaster with its private key.
__Session Keys Generated__: The client and the server generate session keys based on client random bytes, random server bytes and premaster secret. Both will arrive at the same results; this session key is not transmitted, and encryption and decryption are based on this key.
__Ready Messages__: The client and server send a “finished” message using the session key to indicate that the session is ready for transmission. The client and server are now ready to exchange messages over SSL/TLS encrypted connection.