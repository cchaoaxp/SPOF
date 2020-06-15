pipeline {
  agent any
  stages {
    stage('master') {
      parallel {
        stage('master') {
          steps {
            git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'master')
          }
        }

        stage('dev') {
          steps {
            git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'dev')
          }
        }

      }
    }

  }
}