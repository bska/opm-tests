-- This reservoir simulation deck is made available under the Open Database
-- License: http://opendatacommons.org/licenses/odbl/1.0/. Any rights in
-- individual contents of the database are licensed under the Database Contents
-- License: http://opendatacommons.org/licenses/dbcl/1.0/

-- Copyright (C) 2020 Equinor

--
--       SWITCH OFF ECHOING OF INPUT FILES
--
NOECHO
--
--       ROCK COMPRESSIBILITY
--
--       REFERENCE PRESSURE IS TAKEN FROM THE HCPV WEIGHTED FIELD RESERVOIR PRESSURE
--       AS THE PORV IS ALREADY AT RESERVOIR CONDITIONS (ECLIPSE USES THE REFERENCE
--       PRESSURE) TO CONVERT THE GIVEN PORV TO RESERVOIR CONDITIONS USING THE DATA
--       ON THE ROCK KEYWORD)
--
--       REF PRES  CF
--       PSIA      1/PSIA
--       --------  --------
ROCK
         144.445   2.176E-4            / ROCK COMPRESSIBILITY
--
--       GAS-OIL RELATIVE PERMEABILITY TABLES (SGOF)
SGOF
--SG    Krg     Krog    Pcog
0        0.000   1.000   0
0.0373   0.000   0.815   0
0.075    0.002   0.656   0
0.1125   0.007   0.522   0
0.15     0.016   0.410   0
0.1875   0.030   0.316   0
0.225    0.050   0.240   0
0.2625   0.074   0.179   0
0.3      0.105   0.130   0
0.3375   0.141   0.092   0
0.375    0.184   0.062   0
0.4125   0.233   0.041   0
0.45     0.289   0.026   0
0.4875   0.352   0.015   0
0.525    0.422   0.008   0
0.5625   0.500   0.004   0
0.6      0.584   0.002   0
0.6375   0.677   0.001   0
0.675    0.776   0.000   0
0.7125   0.884   0.000   0
0.75     1.000   0.000   0
/
--
--       WATER RELATIVE PERMEABILITY TABLES (SWFN)
--
--       No=2, Nw=3, Swcn=Swcr=0.1, Sorw=0.2, Krwe=0.22 & Krow=1
SWOF
--Sw      Krw     Kro   Pcow
0.10000	0.00000	1.00000 0.0
--0.13680	0.00000	0.89750 0.0
0.17370	0.00030	0.80060 0.0
0.21050	0.00090	0.70910 0.0
0.24740	0.00210	0.62330 0.0
0.28420	0.00400	0.54290 0.0
0.32110	0.00690	0.46810 0.0
0.35790	0.01100	0.39890 0.0
0.39470	0.01640	0.33520 0.0
0.43160	0.02340	0.27700 0.0
0.46840	0.03210	0.22440 0.0
0.50530	0.04270	0.17730 0.0
0.54210	0.05540	0.13570 0.0
0.57890	0.07050	0.09970 0.0
0.61580	0.08800	0.06930 0.0
0.65260	0.10830	0.04430 0.0
0.68950	0.13140	0.02490 0.0
0.72630	0.15760	0.01110 0.0
0.76320	0.18710	0.00280 0.0
0.80000	0.22000	0.00000 0.0
1.00000	1.00000	0.00000 0.0
/
ECHO
--
-- *********************************************************************************************************************************
-- END OF FILE
-- *********************************************************************************************************************************
