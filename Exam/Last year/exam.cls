%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%
%% EXAM.CLS
%% Quick and dirty implementation of the exam macros as a class.
%% Another greasy hack from FEB
%%
%% Usage: \documentclass{exam}
%%
%% Last change: 07/11/96---FEB: created class.
%%              03/02/97---FEB: added \marks macro as the Computing
%%              group need it for their MSc papers
%%              22/09/97---FEB: Moved the \marks macro to exam.sty
%%              so users of latex209 syntax can access it.  
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% Announce ourselves
\NeedsTeXFormat{LaTeX2e} \ProvidesClass{exam}

%% No options are needed or wanted: the following will give an error
%% if any are present...
\ProcessOptions

%% Load up the article style
\LoadClass{article}

%% Get the exam macros
\RequirePackage{exam}

%% Thats all folks!
\endinput
