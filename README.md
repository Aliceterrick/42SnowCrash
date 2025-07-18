# SnowCrash - 42 Project

> 🧠 A beginner-level cybersecurity wargame designed to introduce students to basic privilege escalation and common vulnerabilities.

## 📚 Project Overview

**SnowCrash** is an individual project at 42 that aims to familiarize students with common security flaws found in Linux systems. You will be working on a virtual machine where you must escalate your privileges from `level00` to the final level, using various exploitation techniques.

Each level presents a vulnerable user account with a specific weakness. Your goal is to identify and exploit that weakness in order to retrieve the password for the next level.

## 🔐 Objectives

Throughout this project, you'll learn how to:

- Identify misconfigured permissions and files
- Exploit `setuid` binaries
- Leverage environment variables and symlinks
- Perform buffer overflows and command injections
- Apply reverse engineering and scripting to automate exploits

## 🛠️ Setup and Access

The SnowCrash project is deployed on a dedicated virtual machine provided by 42. To get started:

```bash
ssh level00@<IP_ADDRESS> -p 4242
```

### 📁 Levels' vulnerabilities:

- level00: Caesar
- level01: Hashed password
- level02: Wireshark analyze
- level03: setuid binary
- level04: On going
