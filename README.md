# rtk - R module
This R module is a wrapper for the rtk program.

## Dependencies
This package depends on the R package RCPP, which enables using Cpp-Code easily in R
packages.

## How to install
To build and install this package from source, just run these commands in a directory
above the directory containing the source files.

```
R CMD build rtk
R CMD check rtk*.tar.gz
R CMD install rtk*.tar.gz
```
Or directly via
```
git clone https://github.com/hildebra/Rarefaction/
cd Rarefaction
cd r-package
R CMD INSTALL rtk

```

## Running the package
```R
require("rtk")
# generate semi sparse example data
data            <- matrix(sample(x = c(rep(0, 1500),rep(1:10, 500),1:1000),size = 120, replace = T), 10)
# find the column with the lowest aboundance
samplesize      <- min(colSums(data))
# rarefy the dataset, so each column contains the same number of samples
data.rarefied   <- rtk(input = data, rareDepth = samplesize, NoOfMatrices = 1)

path 		<- "/path/to/a/file.csv"
data.rarefied   <- rtk(input = path, rareDepth = 1000)

```
More documentation if provided inside of the R package. Please look into `man/`.

## Development
To develop this package it is recommended to install the packages `Rcpp` and  `testthat` for R.
Clone the git repo. The main software `rtk` is located in `Rarefaction/rtk`. The files used in the r-package are link via symbolic links. This might not work on your system, so please bear in mind, that changes on those files should always committed so that this structure is preserved, even if your system might not support this.

Unit tests are performed using testthat in the `test/testthat/` location. Read up on unit tests before adding new one.
