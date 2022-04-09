:- module(lcd1602, _, [foreign_interface, fsyntax]).
:- use_foreign_source('/home/pi/screen/LCD1602/lcd1602.c').
% This module is intended to act as a bridge between LCD1602 by Larry
% Bank and Ciao
:- export(ex/0).
ex :-
    lcd1602Init(1, 0x27, _).

:- export(lcd1602Init/3).
:- trust pred lcd1602Init(in(X), in(Y), go(Z)) :: int * int * int + (foreign).

:- export(lcd1602Shutdown/1).
:- trust pred lcd1602Shutdown(in(X)) :: int + (foreign).

:- export(lcd1602SetCursor/2).
:- trust pred lcd1602SetCursor(in(X), in(Y)) :: int * int + (foreign).

:- export(lcd1602WriteString/2).
:- trust pred lcd1602WriteString(in(X), go(Y)) :: atom * int + (foreign).

:- export(lcd1602Clear/1).
:- trust pred lcd1602Clear(in(X)) :: atom + (foreign).

