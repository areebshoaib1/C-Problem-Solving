# Log File Analyzer

## Overview
Servers and backend systems generate massive log files - often millions of lines - mixing `INFO`, `WARN`, `ERROR`, and unclassified entries. When something breaks in production, engineers waste time manually scrolling through logs to find what actually went wrong.

**Log File Analyzer** is a modular C command-line tool that parses a log file, classifies every line by severity, calculates the percentage breakdown, surfaces the most frequently repeated errors, and flags entries that cross a defined error threshold - giving a fast, at-a-glance health summary of any log file in seconds.

## Features
- Parses log files of any size (tested on 10,000+ line files)
- Classifies every line into `ERROR`, `WARN`, `INFO`, or `UNKNOWN`
- Calculates total count and percentage share for each category
- Detects and ranks the **top repeated errors** by frequency
- Extracts structured fields from each error line (Server, Process, Thread, RequestId, ClientIP, UserId, Method, Path, StatusCode, ResponseTime, Database, Message)
- Threshold-based alerting - entries crossing `--threshold` are logged separately to `alerts.log`
- Exports a full report to a file with `--output`
- Generates an annotated copy of the analyzed log (`<filename>_analyzed`)

## Project Structure
The project is split into modules by responsibility rather than one large file:

```
Log-File-Analyzer/
├── 01_types.h              - shared struct/type definitions
├── 02_file_io.h            - file I/O interface
├── 03_file_io.c            - reading and streaming the log file
├── 04_parser.h             - parser interface
├── 05_parser.c             - parses raw log lines into structured fields
├── 06_analyzer.h           - analyzer interface
├── 07_analyzer.c           - classification and frequency analysis logic
├── 08_reporter.h           - reporter interface
├── 09_reporter.c           - formats and writes terminal/report output
├── 10_alerts.h             - alerts interface
├── 11_alerts.c             - flags threshold breaches, writes alerts.log
├── 12_main.c               - entry point, CLI argument handling
├── Makefile                - build configuration
├── server.log              - sample log file for testing
├── report.txt              - example exported report (--output)
├── alerts.log              - example exported alert log

```

## How to Build
```bash
make
```

## How to Run
```bash
analyzer.exe <logfile> [--output report.txt] [--threshold 50]
```

**Example:**
```bash
analyzer.exe server.log
```

## Sample Output
```
********** LOG FILE ANALYZER TOOL BY M.Areeb Shoaib **********
Read 10000 lines from 'server.log'
========================================
         LOG ANALYSIS REPORT
========================================
File     : server.log
Total    : 10000 lines
----------------------------------------
ERROR    : 875  (8.8%)
WARN     : 1161  (11.6%)
INFO     : 6273  (62.7%)
UNKNOWN  : 1691  (16.9%)
----------------------------------------
TOP REPEATED ERRORS:
  1. [1x] 2026-08-04 04:31:44 [ERROR] Server=API-SRV-02 ... Message="External API request failed"
  2. [1x] 2026-08-09 17:14:00 [ERROR] Server=API-SRV-02 ... Message="Request processing failed"
  ...
========================================
```

## Implemented Concepts
- **Modular Architecture** - separate header/source pairs per responsibility (I/O, parsing, analysis, reporting, alerting)
- **File Handling** - reading and streaming large log files line by line
- **String Parsing & Pointers** - extracting structured fields from unstructured text lines
- **Arrays & Frequency Counting** - tracking repeated error messages
- **Command-Line Argument Parsing** - handling `--output` and `--threshold` flags
- **Build Automation** - Makefile-based compilation

## Files
| File              | Purpose                             |
|-------------------|-------------------------------------|
| `01_types.h`      | Shared type/struct definitions      |
| `02-03_file_io.*` | File reading/streaming              |
| `04-05_parser.*`  | Log line parsing                    |
| `06-07_analyzer.*`| Classification + frequency analysis |
| `08-09_reporter.*`| Report formatting/output            |
| `10-11_alerts.*`  | Threshold-based alerting            |
| `12_main.c`       | CLI entry point                     |
| `Makefile`        | Build configuration                 |
| `server.log`      | Sample input log for testing        |
| `report.txt`      | Example generated report            |
| `alerts.log`      | Example generated alert log         |

## Author
Muhammad Areeb Shoaib 
