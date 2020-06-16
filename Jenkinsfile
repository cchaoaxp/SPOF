pipeline {
  agent any
  stages {
    stage('master') {
      steps {
        git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'master')
      }
    }

    stage('QtBuild') {
      parallel {
        stage('QtBuild') {
          steps {
            sh './buildScript.sh'
          }
        }

        stage('Qt Unit Test') {
          steps {
            sh './testScript.sh'
          }
        }

      }
    }

  }
}