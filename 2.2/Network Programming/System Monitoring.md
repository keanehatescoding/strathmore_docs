## Importance
1. Early detection of Issues
2. Performance optimization
3. Understand usage trends to plan for future system capacity and upgrades - capacity planning
4. Monitor for unauthorized access, potential security breaches, or unusual system behavior.

## <abbr title="Simple Network Management Protocol">SNMP</abbr>
Many SNMP versions have been proposed/developed however only 3 major versions have achieved widespread use namely:
1. SNMPv1
2. SNMPv2c
3. SNMPv3

<abbr title='simple network management protocol version 1'>SNMPv1</abbr> is defined in RFC 1065, 1066, 1067.
SNMPv2c contains **community strings** which act as a password to control access to the SNMP agent.
There are two types of community strings:
1. Read only(RO)
2. Read Write(RW)

There are 2 main types of devices in SNMP namely:
1. **Managed devices** - the devices being managed by SNMP i.e routers, switches.
2. **Network Management Station(NMS)** - the device(s) managing the managed devices.
SNMP uses UDP and port number **161** for the **SNMP Agent** while for port number **162** for the **SNMP Manager**.

There are 3 main operations used in SNMP namely:
1. Managed devices can notify the NMS of the events i.e interfaces going up or down.
2. NMS ask the managed devices for information about their status.
3. The NMS tells their managed devices to change their aspects of their configuration.
![[Pasted image 20251213171943.png]]
The **SNMP Manager** is the software installed on the NMS that interacts with the managed devices via receiving notifications, sends requests for notifications, sends configuration changes.
The **SNMP Application** it provides a interface for the network admin to interact with i.e display alerts, statistics, charts etc.
The **SNMP Agent** is the SNMMP software that is installed on the managed devices that that interacts with the SNMP Manager installed on the NMS i.e it sends/receives messages from the NMS.
The **Management Information Base(MIB)** is the structure that contains the variables that are managed by the SNMP. Each variable is identified with an Object ID(OID).
There are 2 types of MIB i.e **Standard MIB** which defined by standards organization i.e IETF and **Enterprise MIB** which are specific to individual vendors.

| Msg Class    | Description                                                                 | Message               |
| ------------ | --------------------------------------------------------------------------- | --------------------- |
| Read         | Message sent by the NMS to read information from the managed devices        | Get, GetNext, GetBulk |
| Write        | Messages sent by the NMS to change information of the managed devices       | Set                   |
| Notification | Messages sent by the managed devices to alert the NMS of a particular event | Trap, Inform          |
| Respone      | Messages sent in response to a previous message/request                     | Response              |

### Nagios
Nagios is an open-source monitoring system designed to monitor network resources.
#### Features of Nagios
1. Flexible notification and alert system
2. Ability to monitor hosts, services and network protocols.
3. Extensible plugin architecture.
4. Performance graphs and trend analysis.
5. Distributed monitoring capabilities
#### Nagios Architecture
##### Nagios Core
The core monitoring engine that processes checks and handles alerts.
##### Plugins
External scripts or executables that perform the actual monitoring checks.

##### NRPE (Nagios Remote Plugin Executor): 
Allows Nagios to execute plugins on remote Linux/Unix machines.
##### Web Interface: 
Provides a graphical representation and control of the monitoring process.

### Cacti
Cacti is an open-source network monitoring and graphing tool designed to visualize time-series data.
#### Features of Cacti
1. **Graphing Capabilities**: Create detailed graphs to visualize data trends over time.
2. **Data Collection**: Collect data through various protocols like SNMP, scripts, and more.
3. **User-Friendly Interface:** Intuitive web-based interface for easy configuration and management.
4. **Automation**: Automate graph creation, data collection, and report generation
#### Cacti Architecture
##### Cacti Poller
**Responsibility:** The core engine responsible for collecting data at regular intervals from various devices and data sources.
**Polling Interval:** Configurable time intervals at which data is collected from devices.
**Data Collection Methods:** Utilizes SNMP, scripts, and other methods to gather data.
##### Data Sources
**Definition:** Represent specific metrics to be monitored (e.g., CPU usage, memory utilization, network traffic).
Types of Data Sources:
1. **SNMP Data Source:** Collects data via SNMP queries.
2. **Script Data Source:** Utilizes custom scripts to gather data.

##### Data Templates
**Purpose:** Define how to handle and display data from data sources.
**Configuration Parameters:** Specifies graphing options, data collection methods, and presentation formats.
##### Graph Templates
**Definition**: Blueprint for how graphs are presented based on data from data templates.
**Configuration Parameters**: Defines graph title, axis labels, colors, and other visual aspects.

##### RRDtool (Round-Robin Database Tool)
**Role:** Handles data storage and management for Cacti.
**RRD Files**: Stores collected data in round-robin databases, optimizing for performance and efficiency.
**Consolidation and Averaging:** Aggregates data at specified intervals to maintain long-term data while reducing storage needs.
##### Cacti Web Interface
**User Interface:** Provides an intuitive web-based interface for configuration, monitoring, and graph viewing.
**Configuration Settings:** Allows users to configure devices, data sources, templates, and graphs.
**Graph Viewing:** Enables users to view and analyze graphs for monitoring purposes.

### ELK
The ELK Stack is a set of three open-source tools used for log processing and analysis: **Elasticsearch, Logstash,** and **Kibana.**
It combines the strengths of Elasticsearch, Logstash, and Kibana to centralize logs, process data, and visualize information.
![[Pasted image 20251213180626.png]]

#### Elasticsearch
**Search and Analytics Engine:** Provides a distributed, RESTful search and analytics engine for data storage and retrieval.
**Data Indexing:** Indexes and stores the data in a scalable and efficient manner, allowing for fast search and analysis.
#### Logstash
**Data Processing Pipeline**: Ingests and processes data from various sources, transforms it, and sends it to Elasticsearch for indexing.
**Input, Filter, Output Plugins:** Modular components for input, filtering, and output operations to handle different data formats and sources.
#### Kibana
**Data Visualization and Dashboard:** Web-based interface for exploring, visualizing, and creating dashboards of the data stored in Elasticsearch.
**Interactive Visualizations:** Allows users to create various visualizations (e.g., charts, graphs, maps) and customize dashboards.

##### Intergration and WorkFlow
**Log Collection:**
Logstash collects logs from various sources (applications, servers, etc.).
**Data Processing:**
Logstash processes and enriches the logs, preparing them for indexing.
**Data Indexing:**
Elasticsearch indexes the processed logs for efficient storage and retrieval.
**Data Visualization:**
Kibana provides a graphical interface to visualize and analyze the data.

##### ELK Stack use cases
**Log Monitoring and Analysis**
Centralized Log Management: Aggregate logs from various sources for easy monitoring and analysis.
**Anomaly Detection:** Identify abnormal patterns or events within logs for proactive troubleshooting.
Security Monitoring i.e
1. **Intrusion Detection:** Detect and respond to potential security threats by analyzing logs for suspicious activities.
2. **Compliance Reporting:** Generate compliance reports by analyzing logs against specific security standards.