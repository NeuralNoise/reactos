#////////////////////////////////////////////////////////////////////
#// Copyright (C) Alexander Telyatnikov, Ivan Keliukh, Yegor Anchishkin, SKIF Software, 1999-2013. Kiev, Ukraine
#// All rights reserved
#// This file was released under the GPLv2 on June 2015.
#////////////////////////////////////////////////////////////////////

SOURCE="$(REL_PATH)\$(SRC).$(SRC_EXT)"
!IF  "$(xCFG)" == "UDF - NT4 Release"
"$(INTDIR)\$(SRC).obj" : $(SOURCE) "$(INTDIR)"
        @$(CPP) $(CPP_PROJ) $(SOURCE)
!ELSEIF  "$(xCFG)" == "UDF - NT4 Debug"
"$(INTDIR)\$(SRC).obj" : $(SOURCE) "$(INTDIR)"
        @$(CPP) $(CPP_PROJ) $(SOURCE)
!ENDIF 