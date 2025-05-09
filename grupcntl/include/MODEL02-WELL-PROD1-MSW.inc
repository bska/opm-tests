-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/
--
-- Copyright (C) 2018-2022 Equinor
--
-- This file contains the multi-segment well specification keywords for MODEL02.
--
--       SWITCH OFF ECHOING OF INPUT FILES
--
NOECHO
-- ---------------------------------------------------------------------------------------------------------------------------------
--       PROD1 - WELL SEGMENT AND COMPLETION SEGMENT SPECIFICATION DATA                                                     
-- ---------------------------------------------------------------------------------------------------------------------------------
WELSEGS                                              
-- Name      Dep 1          Tlen 1      Vol 1     Len&Dep     PresDrop
   PROD1     2557.18408     0.00000     1*        INC         'HF-'    /
-- First Seg     Last Seg     Branch Num     Outlet Seg     Length       Depth Change     Diam        Rough    
-- Main Stem Segments
   2             2            1              1              5.09434      4.95609          0.15200     0.0000100 /
   3             3            1              2              10.21718     9.93992          0.15200     0.0000100 /
   4             4            1              3              10.24573     9.96769          0.15200     0.0000100 /
   5             5            1              4              10.24574     9.96770          0.15200     0.0000100 /
   6             6            1              5              6.40355      6.22978          0.15200     0.0000100 /
   7             7            1              6              6.40355      6.22978          0.15200     0.0000100 /
   8             8            1              7              10.24567     9.96764          0.15200     0.0000100 /
   9             9            1              8              10.24571     9.96767          0.15200     0.0000100 /
   10            10           1              9              10.24570     9.96767          0.15200     0.0000100 /
   11            11           1              10             10.24571     9.96767          0.15200     0.0000100 /
   12            12           1              11             5.97902      5.81677          0.15200     0.0000100 /
    /
COMPSEGS
-- Name 
   PROD1 /
-- I     J     K      Branch no     Start Length     End Length     Dir Pen     End Range     Connection Depth
   6     3     7      1             54.14434         63.97858        /
   6     3     8      1             63.97858         74.22435        /
   6     3     9      1             74.22435         84.46999        /
   6     3     10     1             84.46999         94.00000        /
    /
ECHO
--
-- *********************************************************************************************************************************
-- END OF FILE
-- *********************************************************************************************************************************
