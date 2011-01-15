echo running moc helper..
@echo off

rem This is used by visual studio to preprocess headers that use Q_OBJECT and friends
set MOC=%1
set IN_DIR=%2
set OUT_DIR=%3

FOR /F %%H IN ('dir /b %IN_DIR%*.h') DO (
	echo MOC'ing "%~2%%H"
	%MOC% "%~2%%H" -o %OUT_DIR%moc_%%~nH.cpp
)