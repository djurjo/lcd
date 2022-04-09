:- module(lcd1602, _, [foreign_interface]).
:- use_foreign_source('/home/pi/screen/LCD1602/lcd1602.c').
% This module is intended to act as a bridge between LCD1602 by Larry
% Bank and Ciao
%% :- export(ex/0).
%% ex :-
%%     lcd1602Init(1, 0x27, _).

:- export(lcd1602Control/4).
:- trust pred lcd1602Control(in(BackLight), in(Cursor), in(Blink), go(Z)) :: int * int * int * int + (foreign(lcd1602Control)).

:- export(lcd1602Init/3).
:- trust pred lcd1602Init(in(X), in(Y), go(Z)) :: int * int * int + (foreign(lcd1602Init)).

:- export(lcd1602Shutdown/0).
:- trust pred lcd1602Shutdown :: true +  foreign(lcd1602Shutdown).

:- export(lcd1602SetCursor/3).
:- trust pred lcd1602SetCursor(in(X), in(Y), go(Z)) :: int * int * int + foreign(lcd1602SetCursor).

:- export(lcd1602WriteString/2).
:- trust pred lcd1602WriteString(in(X), go(Y)) :: atom * int + foreign(lcd1602WriteString).

:- export(lcd1602Clear/1).
:- trust pred lcd1602Clear(go(X)) :: int + foreign(lcd1602Clear).

