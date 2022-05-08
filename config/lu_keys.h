// Source: https://github.com/nakohnen/zmk-config/blob/master/config/lu-keys.h
// Based on the swiss french keyboard layout: http://kbdlayout.info/kbdsf

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
#define LU_SEMI     LS(COMMA)     // ;

// Scancode 34
#define LU_DOT      PERIOD          // .
#define LU_COLON    LS(PERIOD)      // :

// Scancode 34
#define LU_MINS     SLASH           // -
#define LU_UNDER	LS(SLASH)	    // _

// Scancode 27
#define LU_EA       SEMICOLON       // é
#define LU_OT 		LS(SEMICOLON)       // ö

// Scancode 28
#define LU_AG       SINGLE_QUOTE    // à
#define LU_A_UM  	LS(SINGLE_QUOTE)       // ä
#define LU_LCBR     RA(SINGLE_QUOTE)       // {

// Scancode 2B
#define LU_DLR      BACKSLASH       // $
#define LU_POUND    LS(BACKSLASH)     	// £
#define LU_RCBR     RA(BACKSLASH)     	// }

// Scancode 1A
#define LU_EG	    LEFT_BRACKET    // è
#define LU_UT       LS(LEFT_BRACKET)     	// ü
#define LU_LBRT     RA(LEFT_BRACKET)     	// [

// Scancode 1B
#define LU_TREMA    RIGHT_BRACKET    // ¨
#define LU_EXCL     LS(RIGHT_BRACKET)     // !
#define LU_RBRT     RA(RIGHT_BRACKET)     // ]

// Scancode 56
#define LU_LT        BACKSLASH     // <
#define LU_GT        LS(BACKSLASH)     // >
#define LU_BACKSLASH RA(BACKSLASH)     // \

// Scancode 29
#define LU_PARAGRAPHE GRAVE     // §
#define LU_DEGREE     LS(GRAVE) // °

// Scancode 02
#define LU_N1         NUMBER_1    // 1
#define LU_PLUS       LS(NUMBER_1)   // +
#define LU_BROKEN_BAR RA(NUMBER_1)   // ¦

// Scancode 03
#define LU_N2         NUMBER_2    // 2
#define LU_DQUOTE     LS(NUMBER_2)   // "
#define LU_AT         RA(NUMBER_2)   // @

// Scancode 04
#define LU_N3         NUMBER_3    // 3
#define LU_ASTERISK   LS(NUMBER_3)   // *
#define LU_HASH       RA(NUMBER_3)   // #

// Scancode 05
#define LU_N4         NUMBER_4    // 4
#define LU_CC         LS(NUMBER_4)   // ç

// Scancode 06
#define LU_N5         NUMBER_5    // 5
#define LU_PERCENT    LS(NUMBER_5)   // %

// Scancode 07
#define LU_N6         NUMBER_6    // 6
#define LU_AMPS       LS(NUMBER_6)   // &
#define LU_NOT        RA(NUMBER_6)   // ¬

// Scancode 08
#define LU_N7         NUMBER_7    // 7
#define LU_SLASH      LS(NUMBER_7)   // /
#define LU_PIPE       RA(NUMBER_7)   // |

// Scancode 09
#define LU_N8         NUMBER_8    // 8
#define LU_LPAR       LS(NUMBER_8)   // /
#define LU_CENT       RA(NUMBER_8)   // |

// Scancode 0A
#define LU_N9         NUMBER_9    // 9
#define LU_RPAR       LS(NUMBER_9)   // /

// Scancode 0B
#define LU_N0         NUMBER_0    // 0
#define LU_EQ         LS(NUMBER_0)   // 0

// Scancode 0C
#define LU_SQUOTE     MINUS          // '
#define LU_QUESTION   LS(MINUS) // ?
#define LU_ACUTE      RA(MINUS) // ´

// Scancode 0D
#define LU_CIRCUM     EQUAL     // ^
#define LU_GRAVE      LS(EQUAL) // `
#define LU_TILDE      RA(EQUAL) // ~
