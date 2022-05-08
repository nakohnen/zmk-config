// Source: https://github.com/nakohnen/zmk-config/blob/master/config/lu-keys.h

#define LU_A        A                  // A
#define LU_B        B                  // B
#define LU_C        C                  // C
#define LU_D        D                  // D
#define LU_E        E                  // E
#define LU_F        F                  // F
#define LU_G        G                  // G
#define LU_H        H                  // H
#define LU_I        I                  // I
#define LU_J        J                  // J
#define LU_K        K                  // K
#define LU_L        L                  // L
#define LU_M        M                  // M
#define LU_N        N                  // N
#define LU_O        O                  // O
#define LU_P        P                  // P
#define LU_Q        Q                  // Q
#define LU_R        R                  // R
#define LU_S        S                  // S
#define LU_T        T                  // T
#define LU_U        U                  // U
#define LU_V        V                  // V
#define LU_W        W                  // W
#define LU_X        X                  // X
#define LU_Y        Z                  // Y
#define LU_Z        Y                  // Z

#define LU_EURO     RA(LU_E)

// For the scan codes look at 
// http://kbdlayout.info/kbdus/overview+scancodes

// Scancode 33
#define LU_COMM     COMMA           // ,
#define LU_SEMI     LS(LU_COMM)     // ;

// Scancode 34
#define LU_DOT      PERIOD          // .
#define LU_COLON    LS(LU_DOT)      // :

// Scancode 34
#define LU_MINS     SLASH           // -
#define LU_UNDER	LS(LU_MINS)	    // _

// Scancode 27
#define LU_EE       SEMICOLON       // é
#define LU_OT 		LS(LU_EE)       // ö

// Scancode 28
#define LU_AG       SINGLE_QUOTE    // à
#define LU_AT 		LS(LU_AG)       // ä
#define LU_LCBR     RA(LU_AG)       // {

// Scancode 2B
#define LU_DLR      BACKSLASH       // $
#define LU_POUND    LS(LU_DLR)     	// £
#define LU_RCBR     RA(LU_DLR)     	// }

// Scancode 1A
#define LU_EG	    LEFT_BRACKET    // è
#define LU_UT       LS(LU_EE)     	// ü
#define LU_LBRT     RA(LU_EE)     	// [

// Scancode 1B
#define LU_TREMA    RIGHT_BRACKET    // ¨
#define LU_EXCL     LS(LU_TREMA)     // !
#define LU_RBRT     RA(LU_TREMA)     // ]

// Scancode 56
#define LU_LT        BACKSLASH     // <
#define LU_GT        LS(LU_LT)     // >
#define LU_BACKSLASH RA(LU_LT)     // \

// Scancode 29
#define LU_PARAGRAPHE GRAVE             // §
#define LU_DEGREE     LS(LU_PARAGRAPHE) // °

// Scancode 02
#define LU_N1         NUMBER_1    // 1
#define LU_PLUS       LS(LU_N1)   // +
#define LU_BROKEN_BAR RA(LU_N1)   // ¦

// Scancode 03
#define LU_N2         NUMBER_2    // 2
#define LU_DQUOTE     LS(LU_N2)   // "
#define LU_AT         RA(LU_N2)   // @

// Scancode 04
#define LU_N3         NUMBER_3    // 3
#define LU_ASTERISK   LS(LU_N3)   // *
#define LU_HASH       RA(LU_N3)   // #

// Scancode 05
#define LU_N4         NUMBER_4    // 4
#define LU_CC         LS(LU_N4)   // ç

// Scancode 06
#define LU_N5         NUMBER_5    // 5
#define LU_PERCENT    LS(LU_N5)   // %

// Scancode 07
#define LU_N6         NUMBER_6    // 6
#define LU_AMPS       LS(LU_N6)   // &
#define LU_NOT        RA(LU_N6)   // ¬

// Scancode 08
#define LU_N7         NUMBER_7    // 7
#define LU_SLASH      LS(LU_N7)   // /
#define LU_PIPE       RA(LU_N7)   // |

// Scancode 09
#define LU_N8         NUMBER_8    // 8
#define LU_LPAR       LS(LU_N8)   // /
#define LU_CENT       RA(LU_N8)   // |

// Scancode 0A
#define LU_N9         NUMBER_9    // 9
#define LU_RPAR       LS(LU_N9)   // /

// Scancode 0B
#define LU_N0         NUMBER_0    // 0
#define LU_EQ         LS(LU_N0)   // 0

// Scancode 0C
#define LU_SQUOTE     MINUS             // '
#define LU_QUESTION   LS(LU_APOSTROPHE) // ?
#define LU_ACUTE      RA(LU_APOSTROPHE) // ´

// Scancode 0D
#define LU_CIRCUM     EQUAL         // ^
#define LU_GRAVE      LS(LU_CIRCUM) // `
#define LU_TILDE      RA(LU_CIRCUM) // ~
