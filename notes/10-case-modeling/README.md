# a brief introduction to uml use case modeling

1.  [use cases modelings](#use-cases-modeling)
...

[goals](#goals)

## goals

-  the use case describes only what the relationship of the actor to the system
    -  the goal must be of value to the primary actor
    -  "withdraw cash" is goal
    -  "enter PIN code" is not a goal

**as a \<actor type> I want \<to do something> so that \<some value is created>**

## benefits of use case modeling

-  gives context for requirements 
    -  put system requirements in logical sequences
    -  illustrate why the system is needed
    -  help verify that all requirements are captured

-  easy to understand
    -  uses terminology that customers and users understand
    -  tell concrete stories of system use
    -  verify stakeholder understanding

-  facilitate agreement with customers

## lifecycle of a use case

1.  identify/discover a use case
2.  provide a brief description for the use case
3.  provide a step-by-step flow (outline) of the events for the use case
4.  provide a detailed description for the use cases

##  1.  identify / discover use cases

-  examples of potential yses cases discovered for a couse registration system
    -  register for courese
    -  withdraw from courses
    -  print transcript
    -  close registration
    -  ...

##  2.  provide a brief description

-  for registering for courses a brief description may be as follows:
    -  this use case allows a student to register for a course offerings in the current semester

-  for close registration use case, a brief description may be as follows:
    -  this use case allows a registar to close the registration process.  _course offerings that do not have enough students are cancelled/  the billing system is notified for each student in each course offering that is not cancelled, so the student can be billed for the course offering_

##  3.  provide a step-by-step flow of the events in a use case

| use case name           |
|:------------------------|
| brief description       |
| basic flow              |
| 1.  first step          |
| 2.  second step         |
| 3.  third step          |
| a1.  alternative flow 1 |
| a2.  alternative flow 2 |
| a3.  alternative flow 3 |

**possible outline of register for a course**

1.  log on to the system
2.  approve log on
3.  enter subject in search
4.  get course list
5.  display course list
6.  select courses
7.  confirm availability
8.  enroll
9.  display final schedule

##  4.  provide a detailed description

##  an arrow is a whole dialog

##  alternate courses of action

##  examples

##  structuring use cases

##  the include relationship


##  the extend relationship

-  insert extension uses cases behavior into base case only if the extending condition is true

##  use case relationships between extend vs include

##  other uses case concepts

##  put some though on specialization

##  capturing requirements with use cases at a glance

##  a sample example:  an atm machine

-  discover use case:  withdraw cash
-  brief description:  the use cases allow sthe customer to withdraw money from their account
-  outline:  authenticate, select amount, dispense cash, exit system

##  atm withdraw cash use case:  basic flow of events

##  atm withdraw cash use case:  alternative flow of events 

##  each alternate flow is fully detailed

##  an example with multiple include use cases

##  another example

##  later we learn about uml sequence diagrams

##  later we learn about uml sequence diagrams

##  complete annotation

##  a nice use of generalization/specialization

##  a checkout use case

