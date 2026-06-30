######################################################################
# RIALTO
######################################################################
#
# Rialto provides a solution to implement the AV (audio and video) pipelines of containerised native applications
# and browsers without exposing hardware-specific handles and critical system resources inside the application containers
#
# Please contact DL-Rialto@sky.uk if you want to change this file or in case of problems

RIALTO_SRCREV ?= "a4ed06647552c45d843a8f4b9e785bb9437ca1e6"
RIALTO_BRANCH ?= "feature/RDKEMW-15616"
RIALTO_VERSION ?= "v0.22.1"
RIALTO_PR ?= "r0"

RIALTO_GSTREAMER_SRCREV ?= "24e2f2214411769efc27089642d391f22d99f7b8"
RIALTO_GSTREAMER_BRANCH ?= "feature/RDKEMW-15616"
RIALTO_GSTREAMER_VERSION ?= "v0.20.1"
RIALTO_GSTREAMER_PR ?= "r0"

RIALTO_OCDM_SRCREV ?= "0ef215962e7c44505f615df73a257cafeccf6778"
RIALTO_OCDM_BRANCH ?= "${CMF_GITHUB_MASTER_BRANCH}"
RIALTO_OCDM_VERSION ?= "v0.10.0"
RIALTO_OCDM_PR ?= "r0"
