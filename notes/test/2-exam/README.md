# exam 2

1.  [software development life cycle models](#software-development-life-cycle-models)
2.  [modeling](#modeling)
3.  [modeling with uml](#modeling-with-uml)
4.  [requirements engineering](#requirements-engineering)
5.  [requirement engineering modeling](#requirement-engineering-modeling)

##  software development life cycle models

###  a development process

-  a process is a set of activities that are planned and are performed to achieve a given purpose.  this includes **roles and responsibilities**, **tools**, and **procedures and methods that define how to do the tasks and relationship between the tasks**

-  why a process?  we because a process provdies guidelines and a structure as well as provides for consistency and minimizes redundancies

###  software development process

-  when a process involves building a software, the process may be referred to as the software development process

-  four major activities
    -  requirements engineering
    -  design
    -  coding / implementation
    -  testing

###  activities may have different names

-  requirements engineering
    -  requirements analysis
    -  system requirements

###  activities may be divided 

-  development activities may be presented as a set of activities
-  requirements engineering 
    -  requirements elicitation
    -  requirements analysis
    -  requirements modeling
    -  requirements validation
-  software development activities may be presented as a set of activities
-  design
    -  architectural design
    -  data structure design
    -  component design
    -  interface design

###  software development models

-  describes the ordering of development activities and the expected artifacts (outcomes) from each activity
-  many development models
    -  planned, disciplied (linear) models

##  modeling

###  why modeling

-  modeling is a simplification of reality
-  modeling is a powerful tool
    -  problem domain model
    -  apply abstractions (continents, oceans, then countries)
    -  create a representation model
-  helps us to visualize a system as we want it to be, it guides us in constructing a system
-  permits us to specify the structure and/or the behavior of a system - these would be static and/or dynamic properties
-  documents the decisions we have made

###  database modeling

-  a bank client
    -  address
    -  asset class
    -  will have at least an account number
    -  will have at least an account balance

###  what do we do with a model?

-  serves as a basis for development
-  serves as a communication tool to unify our views
-  serves as a reasoning tool
-  facilitates documentation

###  principles of modeling

-  models may be expressed at various levels of abstraction, detail, and precision
-  the best models are conceptually connected to reality
    -  focus on what is more natural, elegant, simple (not how it is to be programmed)
-  no single model may be sufficient - models represent stakeholder views, and such views are different
-  use case view - end-user - functionality
    -  there is a logcial view - analysts / designers - structure
    -  there is a implementation view - programmers - software management  
    -  there is a process view - system integrators - performance, scalability, throughput
    -  there is a deployment view - system engineering - system topology, delivery installation, communication

###  model driven software engineering

. -> requirements elicitation -> specification & analysis -> architecture design -> detailed design -> implementation -> o

1.  requirements elicitation - why?
    -  generated artifacts:  text documents, crc cards, use case diagrams, use cases
2.  specification & analysis - what?
    -  generated artifacts:  concept model, enviroment model, z or b or ocl specification
3.  architecture design - how?
    -  generated artifacts:  component diagram, package diagram, adl code
4.  detailed design - how exactly?
    -  generated artifacts:  class diagram, state diagram
5.  implementation - do?
    -  generated artifacts: deployment diagram, java code, configuration file 

###  summary 

-  a model is a simplified representation of an aspect of the world for a specific purpose
-  we use models to better understand a system
-  a model helps to understand, communicate, and build
-  modelling and engineering:  model something not yet existing

###  uml is a modeling language

-  unified modeling language
    -  not a process
    -  a visual language for specification and documentation
    -  the de facto oo modeling language
    -  mostly for software engineering
    -  uml models can be mapped into implementation languages (e.g. c++, java)

###  uml diagrams

-  13 different diagrams classified into static and dynamic groups
-  **static** / **structural** diagrams emphasize the static structure of the system using classes, objects, attributes, operations, and relationships.  such as class diagrams
-  **dynamic** / **behavioral** diagrams emphasize the dynamic behavior of a system by showing collaborations among objects and changes to the internal states fo objects.  such as sequence diagram or state machine diagram

###  uml diagrams in terms of system models

-  what are the requirements?
    -  talk to client, observe, get historical records
    -  create scenarios and use case diagrams
-  what is the structure of the system?
    -  create a class diagram
    -  identify objects, associations, and the multiplicity, attributes, operations
-  what behaviors to expect?
    -  create a sequence diagram
    -  show senders, receivers, and sequence of events
    -  create state diagrams for the interesting objects
-  what installation to expect?
    -  identify dependencies between code using component diagrams
    -  show the runtime structure system with deployment model

###  are all diagrams important?

-  yes, but depends on the level and objectives of modeling
-  high priority for learning
    1.  use-case, class, state transition, interaction diagrams
    2.  activity, component, deployment diagrams
    3.  other diagrams

###  uml is not a process

-  uml is only a language (like java or c++ but at a higher level)
-  uml is not a sdlc process
    -  it can be used with any development process
    -  works intimately with the unified process
    -  works equally well with other processes that employ oo analysis and design

###  uml is not a complete language

-  comprehensive, powerful, and expressive constructs
-  not complete
-  not formal (though reasonably defined syntax and semantics)
-  a complementary formal langauge:  object constraint language (ocl)

###  uml drawing tools

-  commercial and open source often generate code
    -  visual paradigm 

##  modeling with uml

##  requirements engineering

##  requirement engineering modeling

78 questions
4 class diagrams
66% (52 / 78) regarding class diagrams


