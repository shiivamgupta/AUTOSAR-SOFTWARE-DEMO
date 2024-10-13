# AUTOSAR-SOFTWARE-DEMO
AUTOSAR Software Demo


![image](https://github.com/user-attachments/assets/148a0d92-b3e2-4a4b-9c66-c6e70e75ff99)


🔴AUTOSAR stands for AUTomotive Open System ARchitecture.

🔴It has implemented a layered architecture similar to the OSI model with standard specifications founded by a group of companies like BMW Group, Bosch, Continental, Daimler Chrysler, Ford Motor Company, General Motors, Groupe PSA, Toyota Motor Corporation, and Volkswagen Group. (core members of the AUTOSAR).

VECTOR Informatik Is Premium Partner Plus (PP+) at AUTOSAR.

🔴AUTOSAR aims to standardize the software development of the ECUs used in automotive applications.
🔴It has different layers to handle and abstract different operations of code.

An AUTOSAR architecture consists of the following layers-

🔵Application Layer: This layer has the application code which resides on top. It can have different application blocks called Software Components(SWCs) for each feature that the ECU needs to support according to the application.
Example:- Power Window Operation, etc.

🔵AUTOSAR RTE: This layer acts as an intermediary between the Application Layer and the BSW Layer, providing communication and coordination between the SWCs and the BSW components. The RTE manages the interactions between SWCs and BSW components, such as inter-ECU communication, event handling, and resource allocation.

🔵Services Layer: This layer provides different services for applications to use. Services like: System Services, Memory Services, Crypto Services, Off-board communication services, and Communication Services.

🔵ECU Abstraction Layer: This layer provides ECU-related abstractions. It contains different abstracted layers like the I/O Hardware Abstraction layer, Onboard device abstraction, Memory hardware Abstraction, Crypto hardware abstraction, etc. to make applications hardware independent.

🔵MCAL: This is Micro Controller Abstraction Layer it has drivers using which the above layers communicate with Microcontroller hardware peripherals.
Example:- GPIO, I/O, A/D functions, etc.

⏺Types OF AUTOSAR
There are two types of AUTOSAR architectures named Classic and Adaptive. The classic has all the modules generally needed for an application whereas the Adaptive can be configured and adapted according to the application by removing unnecessary modules.

⏺How To Create AUTOSAR Project
For creating an AUTOSAR project you will need software like DaVinci Configurator and developer from Vector. These software generate code based on AUTOSAR framework for your selected hardware, you cannot generate code directly without these software as we do in normal Embedded systems program by using IDE.

Project Link:-
https://github.com/shiivamgupta/AUTOSAR-SOFTWARE-DEMO

Acknowledgements:-
1. https://www.linkedin.com/posts/theembeddedsoftwareengineer_automotive-cybersecurity-communication-activity-7052863609839779841-ouy1?utm_source=share&utm_medium=member_desktop
2. https://www.udemy.com/course/autosar-architecture/ (For Full Demo Explanation).
3. https://www.autosar.org/standards
