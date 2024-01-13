#pragma once;

#define ALPH 0
#define NUMB 1
#define SMBL 2
#define NAVG 3
#define FUNC 4
#define SYST 5
#define LHRM 6
#define RHRM 7

#define [Q] &kp Q
#define [W] &kp W
#define [E] &kp E
#define [R] &kp R
#define [T] &kp T
#define [Y] &kp Y
#define [U] &kp U
#define [I] &kp I
#define [O] &kp O
#define [P] &kp P
#define [A] &kp A
#define [S] &kp S
#define [D] &kp D
#define [F] &kp F
#define [G] &kp G
#define [H] &kp H
#define [J] &kp J
#define [K] &kp K
#define [L] &kp L
#define [:] &kp SEMI
#define [Z] &kp Z
#define [X] &kp X
#define [C] &kp C
#define [V] &kp V
#define [B] &kp B
#define [N] &kp N
#define [M] &kp M
#define [,] &kp COMMA
#define [.] &kp DOT
#define [/] &kp FSLH
#define [LSF] &kp LSHFT
#define [RSF] &kp RSHFT

#define [1] &kp N1
#define [2] &kp N2
#define [3] &kp N3
#define [4] &kp N4
#define [5] &kp N5
#define [6] &kp N6
#define [7] &kp N7
#define [8] &kp N8
#define [9] &kp N9
#define [0] &kp N0

#define [`] &kp GRAVE
#define [!] &kp EXCL
#define [@] &kp AT
#define [#] &kp HASH
#define [$] &kp DLLR
#define [%] &kp PRCNT
#define [^] &kp CARET
#define [&] &kp AMPS
#define [*] &kp ASTRK
#define LPR &kp LPAR
#define RPR &kp RPAR
#define LBK &kp LBKT
#define RBK &kp RBKT
#define [=] &kp EQUAL
#define ['] &kp SQT
#define [\] &kp BSLH

#define [←] &kp LEFT
#define [↑] &kp UP
#define [→] &kp RIGHT
#define [↓] &kp DOWN

#define LAT &kp LALT
#define LCR &kp LCTRL
#define LCM &kp LCMD
#define LSF &kp LSHFT
#define RAT &kp RALT
#define RCR &kp RCTRL
#define RCM &kp RCMD
#define RSF &kp RSHFT
#define OPR &kp OPER
#define OUT &kp OUT

#define ... &trans
#define ... &trans
#define ___ &none

#define BKSP+ &qlt SYST BSPC
#define TAB+  &lt  SMBL TAB
#define ESC+  &lt  NUMB ESC
#define OPR+  &lt  LHRM &none

#define RET+ &lt  NAVG RET
#define DEL+ &qlt SYST DEL
#define OUT+ &lt  RHRM &none

