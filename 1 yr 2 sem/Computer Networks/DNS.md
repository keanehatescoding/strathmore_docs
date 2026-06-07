<abbr title="Domain name system"><b>DNS</b></abbr> is a application layer protocol that is used to find the IP addresses of a domain i.e resolve ip address from domain names.
DNS (Server->Client simplex) operates on port 53 and is UDP by default but can change to TCP for fallback.
The various DNS record types are:
## 1. A Record
It maps a hostname to one or more ipv4 addresses. For example archwiki.org to 217.64.195.201

## 2. AAAA Record
It is similar to the A record, but it is for IPv6. E.g. for aur.archlinux.org is 2a01:4f9:c010:50::1 

## 3. CNAME Record
The CName(Canonical Name) record maps a domain name to another domain name e.g. www.example.com can be mapped to example.com or example.org 

## 4. MX Record
A mail exchange record specifies the mail server responsible for handling emails for a domain. E.g. for aur.archlinux.org it is mail.archlinux.org

There are many other dns record type e.g. NS, DS, PTR, TXT but  the above mentioned are the main types.