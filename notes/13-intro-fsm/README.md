# a brief introduction to finite state machine

### contents
1.  [basic components](#basic-components)
2.  [a quick sample](#a-quick-sample)
3.  [fsm: modeling dynamic behavior](#fsm-modeling-dynamic-behavior)


## basic components

-  a set of states $S$
-  an initial state $s_{0}$
-  a possible set fo one or more final states
-  the initial and final states can be the same
-  a set of inputs $\Sigma$ also called the input vocabulary
-  a set of outputs $O$ also called an output vocabulary
-  a next state function $n(i_{t}, s_{t}) \rightarrow s_{t + 1}$ that maps the input at time $t$ and the state at time $t$ to teh state at time $t + 1$

## a quick samle 

**image provided**

-  circles rep states
-  states:  $s_{1}, s_{2}, s_{3}$
-  initial:  $s_{1}$
-  final:  $s_{3}$
-  arcs represent transitions $\delta$
-  input alphabet $\Sigma = {0, 1}$

## fsm modeling dynamic behavior

-  the fsms are the basis for the uml statecharts, state modeling, state transition modeling, etc
-  uml has added many features to make state modeling (requirements, design) more friendly
-  used for modeling a system (or an object) behavior as a set of states it will have
-  the states represent the object's reaction to events
-  upon an event, a system (object) may stay in the same state or make a transition to another state

## examples of objects that can be modeled via a fsm

-  the controller for a digital watch, it transduces a sequence of inputs (combination of button presses) into a sequence of outputs (combinations of segments illuminated in the display)
-  the controller for a bank of elevators in a large office building
-  it transduces the current set of buttons being pressed and sensors in the elevators (for position, open doors, etc.) into commands to the elevators to move up or down, and open or close their doors

## common fsm notation

**image provided**

-  circles represent states
-  directed arrows reprezent transitions between states

##  a state

-  fsms divide complexity into components known as states
-  a situation during the life of an object during which it satisfies some condition, performs some action, or waits for some event
-  examples of states:
    -  an elevator: stopped, going up, going down
    -  a modem:  idle, sending, receiving
    -  an airplane:  on ground, taking off, flying, landing

##  a transition

-  a transition is the changing from one state of an entity to another
-  transitions are the fsm representation of responses to events
-  transitions may have associated actions
-  transitions may be guarded

##  actions

-  actions are functions that take an insignificant amount of time to perform
-  actions are implemented via an object's operations (or externally available functions)
    -  a transition is taken
    -  a state is entered
    -  a state is excited

##  accept strings

-  fsm is often used to specify a set of acceptable strings 
    -  for example, an input string
    -  the trigger event could be reading (scanning or noticing) a single character
-  an input string is accepted by an fsm iff there is a path in its graphical representation leading from initial state to any final such that concatenation of the labels of the edges on the path is the input string 

##  two common fs notations

-  moore fsm:  output values determined by the current state
-  mealy fsm:  output values determined by the current state and the current input

##  the uml notation

-  more structured
-  additional syntactical and semantical elements
-  notations for better abstraction
-  model systems

##  a couple of related terms

-  bnf:  a formal meta language (used in defining context free grammars, e.g., in compiler design)
-  `<terminal>`
-  defined as $::=$
-  alternative  $|$
-  optional $[]$
-  combining $()$
-  repeated  ${ }$ or $(...)\ast$
-  one or more $(...)+$
-  recursion:  `<integer>` $::=$ `<digit>` $|$ `<integer>` `<digit>`

##  regular expressions

-  not as powerful as bnf (e.g. no recursion)
-  a regular expression is a pattern that can be recognized by a fsm
-  regular expressions and fsms are equivalent concepts
-  semantically the same, one is textual (metal language) one is graphical

##  simple eamples

-  accepting an input string
-  a string is accepted if there is a path in the graphical representation of the fsm, leading from the initial state to any of the final states
-  concatentation of the labels of the edges on the path is the input string

##  examples

-  design a fsm acceptor to accept the language of all binary digits that do not include `1011`
-  design a fsm that accept binary strings of at least length 2 that start and end with the same digit
-  design a fsm that accepts $(110 | 11)$
-  design a fsm to accept binary strings of any length provided that each contain one substring $11$
-  design a fsm that recognizes identifies words in a c++ source file but ignores the words in comments
-  words:  any alpha char including "/"
-  comments:  start with "//" and extend to the end of the line
-  design a fsm to recognize comments in c++
-  design a fsm to recognize floating point numbers in c++
-  design a fsm to recognize dollar amounts
    -  $1,000.00
    -  $1000.00 or $1000.0
    -  $1000
    -  1000
    -  constraints:  (1) if there is a comma, it should be followed by three digits, (2) max two decimal points

##  fsm examples

-  an fsm for all binary strings that do not contain 10
-  an fsm for binary strings of even length that start with 110
-  construct separate machines combine

##  fsm examples (not deterministic)

-  strings of binary digits that end with 00
-  strings of binary digits that contain 0101
-  strings of binary digits that contain exactly two 1s
-  strings of binary digits that conatin at least three 0s
-  accepts strings of 1s and 0s that do not include substring 1011
-  accpets strings of 1s and 0s of at least length 2 that start and end with the same character

##  fsm summary

-  a finite state machine fsm consists of states and transitions
    -  states include the start state and final states
    -  transitions map states and input symbols to states
    -  also known as deterministic finite automata
-  a fsm recognizes a set of strings (language)
    -  these are all strings that reach a final state from the start
-  fsms have many applications
    -  regular expression matching, cache coherence protocols 
    -  verification (e.g. of os kernals and devices)
