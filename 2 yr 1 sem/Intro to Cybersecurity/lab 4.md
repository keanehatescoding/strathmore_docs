```bash
whois www.slashdot.org
Domain Name: slashdot.org
Registry Domain ID: db58fec9ab69438eaea18ef16eff6406-LROR
Registrar WHOIS Server: http://whois.godaddy.com
Registrar URL: http://www.whois.godaddy.com
Updated Date: 2024-11-18T04:00:49Z
Creation Date: 1997-10-05T04:00:00Z
Registry Expiry Date: 2027-10-04T04:00:00Z
Registrar: GoDaddy.com, LLC
Registrar IANA ID: 146
Registrar Abuse Contact Email: domainops@godaddy.com
Registrar Abuse Contact Phone: +1.6028177308
Domain Status: clientDeleteProhibited https://icann.org/epp#clientDeleteProhibited
Domain Status: clientRenewProhibited https://icann.org/epp#clientRenewProhibited
Domain Status: clientTransferProhibited https://icann.org/epp#clientTransferProhibited
Domain Status: clientUpdateProhibited https://icann.org/epp#clientUpdateProhibited
Registry Registrant ID: REDACTED
Registrant Name: REDACTED
Registrant Organization: Domains By Proxy, LLC
Registrant Street: REDACTED
Registrant City: REDACTED
Registrant State/Province: Arizona
Registrant Postal Code: REDACTED
Registrant Country: US
Registrant Phone: REDACTED
Registrant Phone Ext: REDACTED
Registrant Fax: REDACTED
Registrant Fax Ext: REDACTED
Registrant Email: REDACTED
Registry Admin ID: REDACTED
Admin Name: REDACTED
Admin Organization: REDACTED
Admin Street: REDACTED
Admin City: REDACTED
Admin State/Province: REDACTED
Admin Postal Code: REDACTED
Admin Country: REDACTED
Admin Phone: REDACTED
Admin Phone Ext: REDACTED
Admin Fax: REDACTED
Admin Fax Ext: REDACTED
Admin Email: REDACTED
Registry Tech ID: REDACTED
Tech Name: REDACTED
Tech Organization: REDACTED
Tech Street: REDACTED
Tech City: REDACTED
Tech State/Province: REDACTED
Tech Postal Code: REDACTED
Tech Country: REDACTED
Tech Phone: REDACTED
Tech Phone Ext: REDACTED
Tech Fax: REDACTED
Tech Fax Ext: REDACTED
Tech Email: REDACTED
Name Server: ns11.constellix.com
Name Server: ns21.constellix.com
Name Server: ns31.constellix.com
Name Server: ns41.constellix.net
Name Server: ns51.constellix.net
Name Server: ns61.constellix.net
DNSSEC: unsigned
URL of the ICANN Whois Inaccuracy Complaint Form: https://icann.org/wicf/
Last update of WHOIS database: 2025-04-24T16:11:42Z <<<

```
2. Registrar - GoDaddy.com, LLC
3. Primary and Secondary nameserver.
Name Server: ns11.constellix.com
Name Server: ns21.constellix.com
4. and 5, 6. REDACTED
```bash
host www.slashdot.org
www.slashdot.org is an alias for www.slashdot.org.cdn.cloudflare.net.
www.slashdot.org.cdn.cloudflare.net has address 104.18.4.215
www.slashdot.org.cdn.cloudflare.net has address 104.18.5.215
```

__alias__
www.slashdot.org.cdn.cloudflare.net.
__ipv4 address__
104.18.4.215
104.18.5.215 
__ipv6 address__
64:ff9b::6812:4d
64:ff9b::6812:5d
```bash
host -t cname www.slashdot.org
www.slashdot.org is an alias for www.slashdot.org.cdn.cloudflare.net.
host -t cname www.slashdot.org.cdn.cloudflare.net
www.slashdot.org.cdn.cloudflare.net has no CNAME record
```
1. www.slashdot.org has no Canonical Name Record

```bash
dig www.slashdot.org
; <<>> DiG 9.20.8 <<>> www.slashdot.org
;; global options: +cmd
;; Got answer:
;; ->>HEADER<<- opcode: QUERY, status: NOERROR, id: 2382
;; flags: qr rd ra; QUERY: 1, ANSWER: 3, AUTHORITY: 0, ADDITIONAL: 1

;; OPT PSEUDOSECTION:
; EDNS: version: 0, flags:; udp: 4000
;; QUESTION SECTION:
;www.slashdot.org.		IN	A

;; ANSWER SECTION:
www.slashdot.org.	132	IN	CNAME	www.slashdot.org.cdn.cloudflare.net.
www.slashdot.org.cdn.cloudflare.net. 132 IN A	104.18.5.215
www.slashdot.org.cdn.cloudflare.net. 132 IN A	104.18.4.215

;; Query time: 217 msec
;; SERVER: 192.168.170.20#53(192.168.170.20) (UDP)
;; WHEN: Tue Apr 22 14:04:06 EAT 2025
;; MSG SIZE  rcvd: 126
```

```bash
host -t mx www.strathmore.edu
www.strathmore.edu is an alias for strathmore.edu.
host -t mx www.slashdot.org.cdn.cloudflare.net
www.slashdot.org.cdn.cloudflare.net has no MX record
```

```bash
tracert www.slashdot.org

Tracing route to www.slashdot.org.cdn.cloudflare.net [104.18.5.215]
over a maximum of 30 hops:

  1     *        *        *     Request timed out.
  2   221 ms   304 ms    20 ms  10.252.25.1
  3     *        *        *     Request timed out.
  4     *        *        *     Request timed out.
  5     *        *        *     Request timed out.
  6     *        *        *     Request timed out.
  7     *        *        *     Request timed out.
  8     *        *        *     Request timed out.
  9    52 ms   249 ms   107 ms  ae-1.dr-01-mba.ke.seacomnet.com [105.16.17.14]
 10    54 ms    26 ms    35 ms  41.206.127.86
 11    20 ms    12 ms    15 ms  104.18.5.215

Trace complete.
```
