:- module(main, [main/0], []).

:- use_module(lcd1602).

main :-
    lcd1602Init(1, 0x27, _RC),
    lcd1602WriteString("Hii from Ciao!", _),
    lcd1602SetCursor(0, 1, _),
    lcd1602WriteString("Ciao from Ciao", _),
    lcd1602Control(1, 0, 1, _),
    lcd1602Shutdown.
